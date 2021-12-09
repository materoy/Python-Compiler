%{
	#include<stdio.h>
	#include<stdlib.h>
	int v = 1;
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	int size = 0;
	int g = 0;
	void insert(char* l,char* t,int v,char* s,int ln);
	int search(char lab[]);
	void display();
	int yyerror();
	int var = 0;
	int yylex(void);
	int lineno = 1;
	struct symbtab
	{
		int val;
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp;
	char* op;
%}

%token DIGITS NAME PLUS MINUS MUL DIVIDE NUM STRING INTEGER SPECIAL NL SPACE KEYWORD 
%token SPECIAL_START SPECIAL_END IF ELSE WHILE SEP END OR AND NOT IN NOTIN T F COLON 
%token SQUAREBRACKET_START SQUAREBRACKET_END MOD EQUAL PLUSEQUAL PRINT COMMENT RANGE SINGLEQUOTE 
%token DOUBLEQUOTE EXPONENTIAL COMMA INDENT LIST DIVIDEEQUAL MINUSEQUAL MULEQUAL LESSTHAN 
%token LESSTHANEQUAL GREATERTHAN GREATERTHANEQUAL DOUBLEEQUAL GLOBAL YIELD IMPORT RETURN 
%token AS TYPE_COMMENT FOR DEL NONLOCAL ELIF NEWLINE TRUE NONE CLASS DEDENT FINALLY WITH EXPECT IS 
%token MATCH CONTINUE RAISE FROM PASS LAMBDA DEF FALSE CASE ASSERT AWAIT BREAK ASYNC TRY 
%token NLOOK PLOOK RARROW TILDE DOUBLESTAR DOUBLESLASH LEFTSHIFT RIGHTSHIFT 
%token NOTEQUAL EQUALTO GREATEREQUAL LESSEQUAL COLONEQUAL ELLIPSIS DOT
%token LSQB RSQB LBR RBR VBAR BXOR AMPER

%left '(' ')'
%left '*' '@' '/' '%'
%left '+' '-'
%left LEFTSHIFT RIGHTSHIFT

%nonassoc AWAIT IF ELIF

%%
file : 
	statements
	;
statements: statement
	;
statement: compound_stmt 
	 | simple_stmts 
	;

simple_stmts:
    simple_stmt NLOOK';' NEWLINE  //# Not needed, there for speedup
   | ';''.'simple_stmt '['';'']' NEWLINE 

;
simple_stmt:
     assignment
    | star_expressions 
    | return_stmt
    | import_stmt
    | raise_stmt
    | PASS 
    | del_stmt
    | yield_stmt
    | assert_stmt
    | BREAK 
    | CONTINUE 
    | global_stmt
    | nonlocal_stmt
	;
compound_stmt:
     function_def
     if_stmt
    | class_def
    | with_stmt
    | for_stmt
    | try_stmt
    | while_stmt
    | match_stmt
	;
//assignment
assignment:
     NAME ':' expression '['EQUAL annotated_rhs ']' 
    | '(''(' single_target ')' 
         | single_subscript_attribute_target')' ':' expression '['EQUAL annotated_rhs ']' 
    | '('star_targets EQUAL ')' '('yield_expr | star_expressions')' '!' EQUAL '['TYPE_COMMENT']' 
    | single_target augassign TILDE '('yield_expr | star_expressions')'
	;
augassign:
    | '+''=' 
    | '-''=' 
    | '*''=' 
    | '@''=' 
    | '/''=' 
    | '%''=' 
    | '&''=' 
    | '|''=' 
    | '^''=' 
    | LEFTSHIFT'=' 
    | RIGHTSHIFT'=' 
    | DOUBLESTAR'=' 
    | '/''/''='
	;
//global
global_stmt: GLOBAL ',''.'NAME
	;
//nonlocal
nonlocal_stmt: NONLOCAL ',''.'NAME
	;
//yield
yield_stmt: yield_expr 
	;
//assert
assert_stmt: ASSERT expression '['',' expression ']'
	;

//del
del_stmt:
    | DEL del_targets PLOOK '('';' | NEWLINE')' 
	;
//import
import_stmt:
	 import_name 
	| import_from
	;
import_name: IMPORT dotted_as_names 
	; 
import_from:
     FROM '('DOT | ELLIPSIS')''*' dotted_name IMPORT import_from_targets 
     FROM '('DOT | ELLIPSIS')' IMPORT import_from_targets 
	;
import_from_targets:
     LBR import_from_as_names '['','']' RBR 
    | import_from_as_names NLOOK','
    | '*' 
	;
import_from_as_names:
    | ',''.'import_from_as_name
	;
import_from_as_name:
    | NAME '['AS NAME ']' 
	;
dotted_as_names:
    | ',''.'dotted_as_name
	; 
dotted_as_name:
    | dotted_name '['AS NAME ']' 
	;
dotted_name:
     dotted_name '.' NAME 
    | NAME
	;

//IF

if_stmt:
     IF named_expression ':' block elif_stmt 
    | IF named_expression ':' block '['else_block']' 
	;
//elseif
elif_stmt:
    | ELIF named_expression ':' block elif_stmt 
    | ELIF named_expression ':' block '['else_block']' 
	;
//else
else_block:
    | ELSE ':' block 
	;
//while
while_stmt:
     WHILE named_expression ':' block '['else_block']' 
	;
//for
for_stmt:
     FOR star_targets IN TILDE star_expressions ':' '['TYPE_COMMENT']' block '['else_block']' 
    | ASYNC FOR star_targets IN TILDE star_expressions ':' '['TYPE_COMMENT']' block '['else_block']'
	; 
//with
with_stmt:
     WITH LBR ',''.'with_item ',''?' RBR ':' block 
   | WITH ',''.'with_item ':' '['TYPE_COMMENT']' block 
   | with_async
	;
with_async:
     ASYNC WITH '(' ',''.'with_item ',''?' ')' ':' block 
    | ASYNC WITH ',''.'with_item ':' '['TYPE_COMMENT']' block 
	;
with_item:
     expression AS star_target PLOOK'('',' | ')' | ':'')' 
    | expression 
	;
//try
try_stmt:
    try1
     |try2
	;
try1:
	 TRY ':' block finally_block 
	;
try2:
	 TRY ':' block except_block '['else_block']' '['finally_block']'
	;
//EXPECT
except_block:
     EXPECT expression '['AS NAME ']' ':' block 
    | EXPECT ':' block 
	;
//finally
finally_block:
    | FINALLY ':' block 
	;
//match
match_stmt:
     MATCH subject_expr ':' NEWLINE INDENT case_block DEDENT 
	;
//subject expr
subject_expr:
     star_named_expression ',' star_named_expressions'?' 
    | named_expression
	;
case_block:
    | CASE patterns guard'?' ':' block 
	;
guard: 
	IF named_expression 
	;

//patterns
patterns:
    open_sequence_pattern 
    | pattern
	;
//pattern
pattern:
     as_pattern
    | or_pattern
	;
//as
as_pattern:
    | or_pattern AS pattern_capture_target
	; 
//or pattern
or_pattern:
     '|''.'closed_pattern
	;
//closed pattern
closed_pattern:
     literal_pattern
    | capture_pattern
    | wildcard_pattern
    value_pattern
   | group_pattern
   |  sequence_pattern
   |  mapping_pattern
     class_pattern
	;

// # Literal patterns are used for equality and identity constraints
literal_pattern:
     signed_number NLOOK'(' '+' | '-' ')' 
    | complex_number 
    | strings 
    | NONE 
    | TRUE 
    | FALSE 
	;
	
// # Literal expressions are used to restrict permitted mapping pattern keys
literal_expr:
     signed_number NLOOK'(' '+' | '-' ')'
    | complex_number
    | strings
    | NONE 
    | TRUE 
    | FALSE
	;
//complex NUM
complex_number:
    signed_real_number '+' imaginary_number 
   | signed_real_number '-' imaginary_number 
	//coplx 
	;
//coplx:
	//signed_real_number '(' '+' | '-' ')' imaginary_number
	//;
//signed mumber
signed_number:
     NUM
    | '-' NUM 
	;
//signed real NUM
signed_real_number:
     real_number
    | '-' real_number 
	;
//real NUM
real_number:
     NUM 
	;
//imaginary
imaginary_number:
     NUM 
	;
//capture pattern
capture_pattern:
    | pattern_capture_target 
	;
//pattern capture target
pattern_capture_target:
     NLOOK '_' NAME NLOOK'('DOT | LBR | EQUAL')' 
	;
//wildcard
wildcard_pattern:
     '_' 
	;	
//value pattern
value_pattern:
     attr NLOOK '('DOT | LBR | EQUAL')'
	;	 
//attr
attr:
    | name_or_attr '.' NAME 
	;
//name
name_or_attr:
     attr
    | NAME
	;
//group pattern
group_pattern:
     '(' pattern ')' 
	;
//sequence pattern
sequence_pattern:
     '[' maybe_sequence_pattern'?' ']' 
    | '(' open_sequence_pattern'?' ')'
	;
//open sequence 
open_sequence_pattern:
     maybe_star_pattern ',' maybe_sequence_pattern'?' 
	;
//maybe sequence pattern
maybe_sequence_pattern:
    | ',''.'maybe_star_pattern ',''?'
	; 
//maybe star pattern
maybe_star_pattern:
     star_pattern
    | pattern
	;
//star
star_pattern:
     '*' pattern_capture_target 
    | '*' wildcard_pattern 
	;
//mapping
mapping_pattern:
     '{' '}' 
   |  '{' double_star_pattern ',''?' '}' 
   | '{' items_pattern ',' double_star_pattern ',''?' '}' 
   |  '{' items_pattern ',''?' '}'
	;
//items 
items_pattern:
     ',''.'key_value_pattern
	;
//key value pattern
key_value_pattern:
    | '('literal_expr | attr')' ':' pattern 
	;
//double star
double_star_pattern:
     DOUBLESTAR pattern_capture_target 
	;
//class pattern
class_pattern:
     name_or_attr '(' ')' 
    | name_or_attr '(' positional_patterns ',''?' ')' 
    | name_or_attr '(' keyword_patterns ',''?' ')' 
    | name_or_attr '(' positional_patterns ',' keyword_patterns ',''?' ')' 
	;
//positional
positional_patterns:
     ',''.'pattern
	;
//keyword patterns 
keyword_patterns:
     ',''.'keyword_pattern
	;
//keyword pattern
keyword_pattern:
     NAME '=' pattern 
	;
//return
return_stmt:
     RETURN '['star_expressions']'
	;
//raise 

raise_stmt:
     RAISE expression '['FROM expression ']' 
    | RAISE 
	;

//function def
function_def:
   // | decorators function_def_raw 
    //| function_def_raw
	decorators func1
	| func1
	; 
func1:
	function_def_raw
	;
//function def raw
function_def_raw:
     DEF NAME LBR '['params']' RBR '['RARROW expression ']' ':' '['func_type_comment']' block 
    | ASYNC DEF NAME LBR '['params']' RBR '['RARROW expression ']' ':' '['func_type_comment']' block 
	;
//function type comment
func_type_comment:
     NEWLINE TYPE_COMMENT PLOOK '('NEWLINE INDENT')'   //# Must be followed by indented block
    | TYPE_COMMENT
	;
//params
params:
    | parameters
	;
//parameters
parameters:
     slash_no_default param_no_default'*' param_with_default'*' '['star_etc']' 
    | slash_with_default param_with_default'*' '['star_etc']' 
    | param_no_default param_with_default'*' '['star_etc']' 
    | param_with_default '['star_etc']' 
    | star_etc 
	;
//slash no default
slash_no_default:
     param_no_default '/' ',' 
    | param_no_default '/' PLOOK RBR
	;
//slash with default 
slash_with_default:
     param_no_default'*' param_with_default '/' ',' 
    | param_no_default'*' param_with_default '/' PLOOK RBR
	;
//star 

star_etc:
     '*' param_no_default param_maybe_default'*' '['kwds']' 
    | '*' ',' param_maybe_default '['kwds']' 
    | kwds
	;
//kwds 
kwds: DOUBLESTAR param_no_default 	
	;
param_no_default:
     param ',' TYPE_COMMENT'?' 
    | param TYPE_COMMENT'?' PLOOK RBR
	; 
param_with_default:
     param default ',' TYPE_COMMENT'?' 
    | param default TYPE_COMMENT'?' PLOOK RBR
	; 
param_maybe_default:
     param default'?' ',' TYPE_COMMENT'?' 
    | param default'?' TYPE_COMMENT'?' PLOOK RBR
	; 
param: NAME annotation'?' 
	;
annotation: ':' expression
	; 
default: '=' expression 
	;
decorators: '(''@' named_expression NEWLINE ')'
	;
//clas def
class_def:
    //| decorators class_def_raw
    //| class_def_raw
	decorators cladf1
	|cladf1
	;
cladf1: 
	class_def_raw
	;
//class def raw
class_def_raw:
    | CLASS NAME '['LBR '['arguments']' RBR ']' ':' block 
	;
//block
block:
     NEWLINE INDENT statements DEDENT 
    | simple_stmts
	;
//star expressions
star_expressions:
     star_expression '('',' star_expression ')' '['','']' 
    | star_expression ',' 
   // | star_expression
	;
//star expression
star_expression:
     '*' bitwise_or 
    | expression
	;
//star named expressions
star_named_expressions: ',''.'star_named_expression '['','']'
	; 
//star named expression
star_named_expression:
     '*' bitwise_or 
    | named_expression
	;
//assignment
assigment_expression:
     NAME COLONEQUAL '~' expression 
	;
//named expression
named_expression:
     assigment_expression
    | expression '!' COLONEQUAL
	;
//annotated rhs
annotated_rhs: yield_expr 
	| star_expressions
	;
//expressions
//expressions:
    // expression '('',' expression ')' '['','']' 
   //  expression ',' 
     //expression
//	;
//expression
expression:
    // disjunction IF disjunction ELSE expression 
   // | disjunction
	 expr1 IF expr1 ELSE expr2
	| expr1
    | lambdef
	;
expr1:
	 disjunction
	;
expr2:
	expression
	;
//lamdadef
lambdef:
     LAMBDA '['lambda_params']' ':' expression 
	;
//LAMBDA params
lambda_params:
     lambda_parameters	
	;
//LAMBDA parameters
lambda_parameters:
     lambda_slash_no_default lambda_param_no_default'*' lambda_param_with_default'*' '['lambda_star_etc']' 
    | lambda_slash_with_default lambda_param_with_default'*' '['lambda_star_etc']' 
    | lambda_param_no_default lambda_param_with_default'*' '['lambda_star_etc']' 
    | lambda_param_with_default '['lambda_star_etc']' 
    | lambda_star_etc 
	;
//lambda slash no default
lambda_slash_no_default:
     lambda_param_no_default '/' ',' 
    | lambda_param_no_default '/' PLOOK':'
	;
//lambda slash with default 
lambda_slash_with_default:
     lambda_param_no_default'*' lambda_param_with_default '/' ',' 
    | lambda_param_no_default'*' lambda_param_with_default '/' PLOOK':' 
	;
//LAMBDA star def
lambda_star_etc:
     '*' lambda_param_no_default lambda_param_maybe_default'*' '['lambda_kwds']' 
    | '*' ',' lambda_param_maybe_default '['lambda_kwds']' 
    | lambda_kwds 
	;	
//LAMBDA kwds
lambda_kwds: DOUBLESTAR lambda_param_no_default 
	;
//LAMBDA param no default
lambda_param_no_default:
     lambda_param ',' 
    | lambda_param PLOOK':'
	;
//lambda param with default 
lambda_param_with_default:
     lambda_param default ',' 
    | lambda_param default PLOOK':'
	;
//lambda param maybe default 
lambda_param_maybe_default:
     lambda_param default'?' ',' 
    | lambda_param default'?' PLOOK':'
	;
//lambda param 
lambda_param: NAME 
	;
//disjunction
disjunction:
   //  conjunction '('OR conjunction ')'
 //  | conjunction

	 dsx '(' OR dsx ')'
	//|dsx
	
	;
dsx:
	 conjunction
	;
//conjunction
conjunction:
     inversion '('AND inversion ')'
  //  | inversion
	;
//inversion
inversion:
     inv1 
     | comparison
	;
inv1:
	 NOT inversion
	;
//cvbr:
//	 bitwise_or
//	;
//comparison
comparison:
     bitwise_or compare_op_bitwise_or_pair 
    | bitwise_or
	;

//compare bitwise or
compare_op_bitwise_or_pair:
     eq_bitwise_or
    noteq_bitwise_or
   |  lte_bitwise_or
   | lt_bitwise_or
   |  gte_bitwise_or
   | gt_bitwise_or
   |  notin_bitwise_or
   |  in_bitwise_or
   |  isnot_bitwise_or
   | is_bitwise_or
	;
//eq
eq_bitwise_or: 
	 EQUALTO bitwise_or 
	;
noteq_bitwise_or:
      '(''!'EQUAL ')' bitwise_or 
	;
lte_bitwise_or: 
	LESSEQUAL bitwise_or
	;
lt_bitwise_or: 
	'<' bitwise_or 
	;
gte_bitwise_or: 
	GREATEREQUAL bitwise_or
	; 
gt_bitwise_or: 
	'>' bitwise_or 
	;
notin_bitwise_or: NOT IN bitwise_or 
	;
in_bitwise_or:IN bitwise_or 
	;
isnot_bitwise_or: IS NOT bitwise_or
	; 
is_bitwise_or: IS bitwise_or
	;

//BITwise or
bitwise_or:
    bitwise_or VBAR bitwise_xor 
    | bitwise_xor
	;
//btx:
//	| bitwise_or 
//	;
bitwise_xor:
     bitwise_xor BXOR bitwise_and 
    | bitwise_and	
	;
//bxor:
//	| bitwise_xor
//	;
bitwise_and:
     band AMPER shift_expr 
   | shift_expr
	;
band:
	| bitwise_and
	;
shift_expr:
    // shift_expr '<''<' sum 
    //| shift_expr '>''>' sum 
	// shft
	shft LEFTSHIFT sum
	|shft RIGHTSHIFT sum
    | sum
	;
shft:
	shift_expr
	//| shift_expr '(' LEFTSHIFT | RIGHTSHIFT ')' sum
	;

sum :  
	 sum_x
	
	;
sum_x: 
	sum PLUS term 
        |sum MINUS term 
	| trm2
     // sum
    
	//| '(' '+' | '-' ')' term
	 ;
 
//sum:
  //  | sum '+' term 
    //| sum '-' term 
    //| term
//	;
term:
      trm
     | factor
	;
trm:
     term '*' factor 
      | term '/' factor 
    | term DOUBLESLASH factor 
    | term '%' factor 
    | term '@' factor 

	// trm2 '(' '*' | '/' | DOUBLESLASH | '%' | '@' ')' factor 
	;
trm2 :
	 term
	;
factor:
     fac
     | power
	; 
fac:
     '+' factor 
    | '-' factor 
    | '~' factor
	// '(' '+' | '-' | '~' ')' factor
	;
//POWER
power:
     await_primary DOUBLESTAR factor 
    | await_primary
	;
await_expr:
	AWAIT primary
	;
await_primary:
     await_expr
  //  | primary
	;
primary:
   // | invalid_primary  # must be before 'primay genexp' because of invalid_genexp
     prn
   // | primary genexp 
  //  | primary '(' '['arguments']' ')' 
   // | primary '[' slices ']' 
   // | atom
	;

prn:
	 | primary '.' NAME
	 | primary genexp 
    	 | primary LBR '['arguments']' RBR 
   	 | primary LSQB slices RSQB 
	 atom
	;
//SLICES
slices:
     slice NLOOK ',' 
    | ',''.'slice '['','']' 
	;
slice:
     '['expression']' ':' '['expression']' '['':' '['expression']' ']' 
    | named_expression 
	;
atom:
     NAME
    | TRUE 
    | FALSE 
    | NONE 
    | strings
    | NUM
    | '('tuple | group | genexp')'
    | '('list | listcomp')'
    | '('dict | set | dictcomp | setcomp')'
    | ELLIPSIS 
	;
strings: STRING
	;
list:
     LSQB '['star_named_expressions']' RSQB
	;
listcomp:
     LSQB named_expression for_if_clauses RSQB 
	;
tuple:
     LBR '['star_named_expression ',' '['star_named_expressions']'  ']' RBR 
	;
group:
     LBR '('yield_expr | named_expression')' RBR 
	;
genexp:
     LBR '(' assigment_expression | expression NLOOK COLONEQUAL ')' for_if_clauses RBR
	;
set: '{' star_named_expressions '}' 
	;
setcomp:
     '{' named_expression for_if_clauses '}' 
	;
dict:
     '{' '['double_starred_kvpairs']' '}' 
   // | '{' invalid_double_starred_kvpairs '}'
	;

dictcomp:
     '{' kvpair for_if_clauses '}' 
	;
double_starred_kvpairs: ',''.'double_starred_kvpair '['','']' 
	;
double_starred_kvpair:
    | DOUBLESTAR bitwise_or 
    | kvpair
	;
kvpair: expression ':' expression 
	;
for_if_clauses:
    | for_if_clause
	;
for_if_clause:
    ASYNC FOR star_targets IN TILDE disjunction '('IF disjunction ')''*' 
     |FOR star_targets IN TILDE disjunction IF disjunction ')''*' 
	;
yield_expr:
     YIELD FROM expression 
    | YIELD '['star_expressions']' 
	;

arguments:
    | args '['','']' PLOOK')' 
	;
args:
    | ',''.''('starred_expression | '(' assigment_expression | expression NLOOK COLONEQUAL ')' NLOOK EQUAL')' '['',' kwargs']' 
    | kwargs 
	;
kwargs:
     ',''.'kwarg_or_starred ',' ',''.'kwarg_or_double_starred
    | ',''.'kwarg_or_starred
    | ',''.'kwarg_or_double_starred
	;
starred_expression:
    | '*' expression 
	;
kwarg_or_starred:
     NAME EQUAL expression 
    | starred_expression 
	;
kwarg_or_double_starred:
     NAME '=' expression 
    | DOUBLESTAR expression 
	;
//# NOTE: star_targets may contain *bitwise_or, targets may not.
star_targets:
     star_target NLOOK',' 
    | star_target '('',' star_target ')''*' '['','']' 
	;
star_targets_list_seq: ',''.'star_target '['','']' 
	;
star_targets_tuple_seq:
     star_target '('',' star_target ')' '['','']'
    | star_target ','
	; 
star_target:
     '*' '('NLOOK '*' star_target')' 
    | target_with_star_atom
	;
target_with_star_atom:
     t_primary '.' NAME NLOOK t_lookahead 
    | t_primary LSQB slices RSQB NLOOK t_lookahead 
     star_atom
	;
star_atom:
     NAME 
    | LBR target_with_star_atom RBR 
    | LBR '['star_targets_tuple_seq']' RBR 
    | LSQB '['star_targets_list_seq']' RSQB 
	;
single_target:
     single_subscript_attribute_target
    | NAME 
    | LBR single_target RBR
	; 
single_subscript_attribute_target:
     t_primary '.' NAME NLOOK t_lookahead 
    | t_primary LSQB slices RSQB NLOOK t_lookahead 
	;

del_targets: ',''.'del_target '['','']' 
	;
del_target:
     t_primary '.' NAME NLOOK t_lookahead 
    | t_primary LSQB slices RSQB NLOOK t_lookahead 
    | del_t_atom
	;
del_t_atom:
     NAME
    | LBR del_target RBR 
    | LBR '['del_targets']' RBR
    | LSQB '['del_targets']' RSQB
	;
//Tprimary
t_primary:
    t_primary '.' NAME PLOOK t_lookahead 
    | t_primary LSQB slices RSQB PLOOK t_lookahead 
    | t_primary genexp PLOOK t_lookahead 
    | t_primary LBR '['arguments']' RBR PLOOK t_lookahead 
    | atom PLOOK t_lookahead 
	;
t_lookahead: 
	'(' 
	| '[' 
	| '.'
	;
   
  
%%

int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line NUM %d -------------------------\n",lineno);
    	error = 1;
	v=0;
        return 0;
}
 void insert(char* l,char* t,int v,char* s,int ln)
{
	struct symbtab *n;
	n=search(l);
	if(n!=NULL)
        {
              	n->value = v;
              	n->lineno = ln;
              	strcpy(n->scope,s);  
        }
        else
        {
        	struct symbtab *p;
                p=malloc(sizeof(struct symbtab));
                strcpy(p->label,l);
                strcpy(p->type,t);
                p->value = v;
                p->lineno = ln;
                strcpy(p->scope,s);
                p->next=null;
                if(size==0)
                {
		        first=p;
		        last=p;
                }
                else
                {
                        last->next=p;
                        last=p;
                }
                size++;
        }
}

void display()
{
        int i;
        struct symbtab *p;
        p=first;
        printf("\n------------------SYMBOL TABLE----------------\n");
        printf("----------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
int search(char lab[])
{
        int i=0;
        struct symbtab *p,*flag;
        p=first;
        for(i=0;i<size;i++)
        {
                if(strcmp(p->label,lab)==0)
                {
                	flag=p;
                	return flag;
                }
                p=p->next;
        }
        p=NULL;
        return p;
}
int main(){
         extern FILE* yyin;
	 yyin = fopen("inp.py","r");
	 yyparse();
	 if(v)
	 {
	    printf("------------------------------PARSE SUCCESSFUL---------------------------\n");
	 }
	 if(!error){
	 	display();
	 }
	 return 1;
	
}