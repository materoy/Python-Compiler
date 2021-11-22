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

%token DIGITS NAME PLUS MINUS MUL DIVIDE NUM STRING INTEGER SPECIAL NL SPACE KEYWORD SPECIAL_START SPECIAL_END IF ELSE WHILE SEP END OR AND NOT IN NOTIN T F COLON SQUAREBRACKET_START SQUAREBRACKET_END MOD EQUAL PLUSEQUAL PRINT COMMENT RANGE SINGLEQUOTE DOUBLEQUOTE EXPONENTIAL COMMA INDENT LIST DIVIDEEQUAL MINUSEQUAL MULEQUAL LESSTHAN LESSTHANEQUAL GREATERTHAN GREATERTHANEQUAL DOUBLEEQUAL NOTEQUAL GLOBAL YIELD IMPORT RETURN AS TYPE_COMMENT FOR DEL NONLOCAL ELIF NEWLINE TRUE NONE CLASS DEDENT FINALLY WITH EXPECT IS MATCH CONTINUE RAISE FROM PASS LAMBDA DEF FALSE CASE ASSERT AWAIT BREAK ASYNC TRY 
%%
file:  SQUAREBRACKET_START statements SQUAREBRACKET_END 
		;
interactive: statement_newline
		;
eval: expressions NEWLINE '*'
		;
func_type: '('  SQUAREBRACKET_START type_expressions SQUAREBRACKET_END  ')' '-''>' expression NEWLINE '*'
			;
fstring: star_expressions
			;
type_expressions: ',' '.'expression ',' '*' expression ',' '*' '*' expression
				| ',' '.'expression ',' '*' expression
				| ',' '.'expression ',' '*' '*' expression
				| '*' expression ',' '*' '*' expression
				| '*' expression
				| '*' '*' expression
				| ',' '.'expression
				;
statements: statement'+'
			;
statement: compound_stmt | simple_stmts
			;
statement_newline: compound_stmt NEWLINE
				| simple_stmts
				| NEWLINE
				;
simple_stmts:DEF
			| simple_stmt '!'';' NEWLINE
			| ';' '.' simple_stmt '+'  SQUAREBRACKET_START  ';'  SQUAREBRACKET_END  NEWLINE
			;
simple_stmt: assignment
			| star_expressions
			| return_stmt
			| import_stmt
			| raise_stmt
			| PASS
			| del_stmt
			| yield_stmt
			| BREAK
			| CONTINUE
			| assert_stmt
			| global_stmt
			| nonlocal_stmt
			;
compound_stmt: function_def
			| if_stmt
			| class_def
			|	 with_stmt
			| for_stmt
			| try_stmt
			| while_stmt
			| match_stmt
			;
assignment: NAME ':' expression  SQUAREBRACKET_START EQUAL annotated_rhs  SQUAREBRACKET_END 
			| '(''(' single_target ')'
			| single_subscript_attribute_target ')' ':' expression  SQUAREBRACKET_START EQUAL annotated_rhs  SQUAREBRACKET_END 
			| '('star_targets EQUAL ')' '+' '('yield_expr '|' star_expressions ')' '!'EQUAL  SQUAREBRACKET_START TYPE_COMMENT SQUAREBRACKET_END 
			| single_target augassign '~' '('yield_expr '|' star_expressions')'
			;
augassign:
		| '+'EQUAL
		| '-'EQUAL
		| '*'EQUAL
		| '@'EQUAL
		| '/'EQUAL
		| '%'EQUAL
		| '&'EQUAL
		| '|'EQUAL
		| '^'EQUAL
		| '<''<'EQUAL
		| '>''>'EQUAL
		| '*''*'EQUAL
		| '/''/'EQUAL
		;
global_stmt: GLOBAL ',' '.'NAME'+'
		;
nonlocal_stmt:NONLOCAL ',''.'NAME'+'
				;
yield_stmt: yield_expr
			;
assert_stmt: ASSERT expression  SQUAREBRACKET_START  ',' expression  SQUAREBRACKET_END 
			;
del_stmt: DEL del_targets '&''('';' '|' NEWLINE')'
			;
import_stmt: import_name '|' import_from
			;
import_name: IMPORT dotted_as_names
			;
import_from:
			| FROM '(''.' '|' '.''.''.'')''*' dotted_name IMPORT import_from_targets
			| FROM '(''.' '|' '.''.''.'')''+' IMPORT import_from_targets
			;
import_from_targets:
			| '(' import_from_as_names  SQUAREBRACKET_START ',' SQUAREBRACKET_END  ')'
			| import_from_as_names '!'','
			| '*'
			;
import_from_as_names: NAME  SQUAREBRACKET_START  AS NAME  SQUAREBRACKET_END 
			;
dotted_as_names: ',''.'dotted_as_name'+'
				;
dotted_as_name: dotted_name  SQUAREBRACKET_START  AS NAME  SQUAREBRACKET_END 
			;
dotted_name: dotted_name '.' NAME
			| NAME
			;
if_stmt: IF named_expression ':' block elif_stmt
		| IF named_expression ':' block  SQUAREBRACKET_START else_block SQUAREBRACKET_END 
		;
elif_stmt: ELIF named_expression ':' block elif_stmt
		| ELIF named_expression ':' block  SQUAREBRACKET_START else_block SQUAREBRACKET_END 
		;
else_block: ELSE ':' block
			;
while_stmt: WHILE named_expression ':' block  SQUAREBRACKET_START else_block SQUAREBRACKET_END 
			;
for_stmt:
		| FOR star_targets IN '~' star_expressions ':'  SQUAREBRACKET_START TYPE_COMMENT SQUAREBRACKET_END  block  SQUAREBRACKET_START else_block SQUAREBRACKET_END 
		| ASYNC FOR star_targets IN '~' star_expressions ':'  SQUAREBRACKET_START TYPE_COMMENT SQUAREBRACKET_END  block  SQUAREBRACKET_START else_block SQUAREBRACKET_END 
		;
with_stmt: WITH '(' ',' '.' with_item'+' ',' '?' ')' ':' block
		| WITH ',' '.'with_item'+' ':'  SQUAREBRACKET_START TYPE_COMMENT SQUAREBRACKET_END  block
		| ASYNC WITH '(' ',' '.'with_item'+' ',' '?' ')' ':' block
		| ASYNC WITH ',''.'with_item'+' ':'  SQUAREBRACKET_START TYPE_COMMENT SQUAREBRACKET_END  block
		;
with_item:
		| expression AS star_target '&''('',' '|' ')' '|' ':'')'
		| expression
		;
try_stmt:
		| TRY ':' block finally_block
		| TRY ':' block except_block'+'  SQUAREBRACKET_START else_block SQUAREBRACKET_END   SQUAREBRACKET_START finally_block SQUAREBRACKET_END 
		;
except_block:
			| EXPECT expression  SQUAREBRACKET_START AS NAME  SQUAREBRACKET_END  ':' block
			| EXPECT ':' block
			;
finally_block:FINALLY ':' block
			;
match_stmt: MATCH subject_expr ':' NEWLINE INDENT case_block'+' DEDENT
			;
subject_expr:
			| star_named_expression ',' star_named_expressions'?'
			| named_expression
			;
case_block:CASE patterns guard'?' ':' block
			;
guard: IF named_expression
		;
patterns:
		| open_sequence_pattern
		| pattern
		;
pattern:
    | as_pattern
    | or_pattern
    ;
as_pattern:or_pattern AS pattern_capture_target
		;
or_pattern:
		| '|''.'closed_pattern'+'
		;
closed_pattern:
			| literal_pattern
			| capture_pattern
			| wildcard_pattern
			| value_pattern
			| group_pattern
			| sequence_pattern
			| mapping_pattern
			| class_pattern
			;
literal_pattern:
			| signed_number '!''(''+' '|' '-'')'
			| complex_number
			| strings
			| NONE
			| TRUE
			| FALSE
			;
literal_expr:
		| signed_number '!''(''+' '|' '-'')'
		| complex_number
		| strings
		| NONE
		| TRUE
		| FALSE
		;
complex_number:
			| signed_real_number '+' imaginary_number
			| signed_real_number '-' imaginary_number
			;
signed_number:
			| INTEGER
			| '-' INTEGER
			;
signed_real_number:
				| real_number
				| '-' real_number
				;
real_number:
		| INTEGER
		;
imaginary_number:
		| INTEGER
		;
capture_pattern:
		| pattern_capture_target
		;
pattern_capture_target:
    | '!''_' NAME '!' '(''.' '|' '(' | EQUAL')'
    ;
wildcard_pattern: '_'
				;
value_pattern:
				| attr '!''(''.' '|' '(' '|' EQUAL')'
				;
attr: name_or_attr '.' NAME
		;
name_or_attr:
		| attr
		| NAME
		;
group_pattern:
			| '(' pattern ')'
			;
sequence_pattern:
			|  SQUAREBRACKET_START  maybe_sequence_pattern'?'  SQUAREBRACKET_END 
			| '(' open_sequence_pattern'?' ')'
			;
open_sequence_pattern: maybe_star_pattern ',' maybe_sequence_pattern'?'
					;
maybe_sequence_pattern:',''.'maybe_star_pattern'+' ',''?'
						;
maybe_star_pattern:star_pattern
			| pattern
			;
star_pattern:
			| '*' pattern_capture_target
			| '*' wildcard_pattern
			;
mapping_pattern:
			| '{' '}'
			| '{' double_star_pattern ',''?' '}'
			| '{' items_pattern ',' double_star_pattern ',''?' '}'
			| '{' items_pattern ',''?' '}'
			;
items_pattern: ',''.'key_value_pattern'+'
				;
key_value_pattern: '('literal_expr '|' attr')' ':' pattern
					;
double_star_pattern: '*''*' pattern_capture_target
					;
class_pattern:name_or_attr '(' ')'
			| name_or_attr '(' positional_patterns ',''?' ')'
			| name_or_attr '(' keyword_patterns ',''?' ')'
			| name_or_attr '(' positional_patterns ',' keyword_patterns ',''?' ')'
			;
positional_patterns: ',''.'pattern'+'
					;
keyword_patterns: ',''.'keyword_pattern'+'
					;
keyword_pattern: NAME EQUAL pattern
				;
return_stmt :  RETURN  SQUAREBRACKET_START expression_list SQUAREBRACKET_END 
    ;
raise_stmt: RAISE expression  SQUAREBRACKET_START FROM expression  SQUAREBRACKET_END 
		| RAISE
		;
function_def:decorators function_def_raw
			| function_def_raw
			;
function_def_raw: DEF NAME '('  SQUAREBRACKET_START params SQUAREBRACKET_END  ')'  SQUAREBRACKET_START  '-' '>' expression  SQUAREBRACKET_END  ':'  SQUAREBRACKET_START func_type_comment SQUAREBRACKET_END  block
				| ASYNC DEF NAME '('  SQUAREBRACKET_START params SQUAREBRACKET_END  ')'  SQUAREBRACKET_START '-''>' expression  SQUAREBRACKET_END  ':'  SQUAREBRACKET_START func_type_comment SQUAREBRACKET_END  block
				;
func_type_comment: NEWLINE TYPE_COMMENT '&''('NEWLINE INDENT')'
				//# Must be followed by indented block
				| TYPE_COMMENT
				;
params:parameters
		;
parameters: slash_no_default param_no_default'*' param_with_default'*'  SQUAREBRACKET_START star_etc SQUAREBRACKET_END 
		| slash_with_default param_with_default'*'  SQUAREBRACKET_START star_etc SQUAREBRACKET_END 
		| param_no_default'+' param_with_default'*'  SQUAREBRACKET_START star_etc SQUAREBRACKET_END 
		| param_with_default'+'  SQUAREBRACKET_START star_etc SQUAREBRACKET_END 
		| star_etc
		;
/*				Some duplication here because we can't write (',' | &')'),
			 which is because we don't support empty alternatives (yet).*/

slash_no_default: param_no_default'+' '/' ','
				| param_no_default'+' '/' '&' ')'
				;
slash_with_default: param_no_default'*' param_with_default'+' '/' ','
				| param_no_default'*' param_with_default'+' '/' '&'')'
				;
star_etc:
		| '*' param_no_default param_maybe_default'*'  SQUAREBRACKET_START kwds SQUAREBRACKET_END 
		| '*' ',' param_maybe_default'+'  SQUAREBRACKET_START kwds SQUAREBRACKET_END 
		| kwds
		;
kwds: '*''*' param_no_default
		;
param_no_default:
    | param ',' TYPE_COMMENT'?'
    | param TYPE_COMMENT'?' '&'')'
    ;
param_with_default:
		| param default ',' TYPE_COMMENT'?'
		| param default TYPE_COMMENT'?' '&'')'
		;
param_maybe_default:
		| param default'?' ',' TYPE_COMMENT'?'
		| param default'?' TYPE_COMMENT'?' '&'')'
		;
param: NAME annotation'?'
		;
annotation: ':' expression
		;
default: EQUAL expression
		;
decorators: '(''@' named_expression NEWLINE ')''+'
		;
class_def:
		| decorators class_def_raw
		| class_def_raw
		;
class_def_raw:
		| CLASS NAME  SQUAREBRACKET_START '('  SQUAREBRACKET_START arguments SQUAREBRACKET_END  ')'  SQUAREBRACKET_END  ':' block
		;
block:
		| NEWLINE INDENT statements DEDENT
		| simple_stmts
		;
star_expressions:
		| star_expression '('',' star_expression ')''+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
		| star_expression ','
		| star_expression
		;
star_expression:
		| '*' bitwise_or
		| expression
		;
star_named_expressions: ',''.'star_named_expression'+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
		;
star_named_expression:
		| '*' bitwise_or
		| named_expression
		;
assigment_expression:
		| NAME ':'EQUAL '~' expression
		;
named_expression:
		| assigment_expression
		| expression '!'':'EQUAL
		;
annotated_rhs: yield_expr '|' star_expressions
		;
expressions:
		| expression '('',' expression ')''+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
		| expression ','
		| expression
		;
expression:
		| disjunction IF disjunction ELSE expression
		| disjunction
		| lambdef
		;
lambdef:
    | LAMBDA   SQUAREBRACKET_START  lambda_params  SQUAREBRACKET_END  ':' expression
     ;
lambda_params:lambda_parameters
		;
lambda_parameters:
			| lambda_slash_no_default lambda_param_no_default'*' lambda_param_with_default'*'  SQUAREBRACKET_START 
			| lambda_slash_with_default lambda_param_with_default'*'  SQUAREBRACKET_START lambda_star_etc SQUAREBRACKET_END 
			| lambda_param_no_default'+' lambda_param_with_default'*'  SQUAREBRACKET_START lambda_star_etc SQUAREBRACKET_END 
			| lambda_param_with_default'+'  SQUAREBRACKET_START lambda_star_etc SQUAREBRACKET_END 
			| lambda_star_etc
			;
lambda_slash_no_default:
		| lambda_param_no_default'+' '/' ','
		| lambda_param_no_default'+' '/' '&'':'
		;
lambda_slash_with_default:
		| lambda_param_no_default'*' lambda_param_with_default'+' '/' ','
		| lambda_param_no_default'*' lambda_param_with_default'+' '/' '&'':'
		;
lambda_star_etc:
		| '*' lambda_param_no_default lambda_param_maybe_default'*'  SQUAREBRACKET_START lambda_kwds SQUAREBRACKET_END 
		| '*' ',' lambda_param_maybe_default'+'  SQUAREBRACKET_START lambda_kwds SQUAREBRACKET_END 
		| lambda_kwds
		;
lambda_kwds: '*''*' lambda_param_no_default
			;
lambda_param_no_default:
		| lambda_param ','
		| lambda_param '&'':'
		;
lambda_param_with_default:
		| lambda_param default ','
		| lambda_param default '&'':'
		;
lambda_param_maybe_default:
		| lambda_param default'?' ','
		| lambda_param default'?' '&'':'
		;
lambda_param: NAME
		;
disjunction:
		| conjunction '('OR conjunction ')''+'
		| conjunction
		;
conjunction:
		| inversion '('AND inversion ')''+'
		| inversion
		;
inversion:
		| NOT inversion
		| comparison
		;
comparison:
		| bitwise_or compare_op_bitwise_or_pair'+'
		| bitwise_or
		;
compare_op_bitwise_or_pair:
					| eq_bitwise_or
					| noteq_bitwise_or
					| gte_bitwise_or
					| gt_bitwise_or
					| notin_bitwise_or
					| in_bitwise_or
					| isnot_bitwise_or
					| is_bitwise_or
					;
eq_bitwise_or: DOUBLEEQUAL bitwise_or
			;
noteq_bitwise_or:
		|'(''!'EQUAL ')' bitwise_or
		;
lte_bitwise_or: '<'EQUAL bitwise_or
			;
lt_bitwise_or: '<' bitwise_or
			;
gte_bitwise_or: '>'EQUAL bitwise_or
			;
gt_bitwise_or: '>' bitwise_or
			;
notin_bitwise_or: NOT IN bitwise_or
			;
in_bitwise_or: IN bitwise_or
			;
isnot_bitwise_or: IS NOT bitwise_or
			;
is_bitwise_or: IS bitwise_or
			;
bitwise_or:
	| bitwise_or '|' bitwise_xor
	| bitwise_xor
	;
bitwise_xor:
	| bitwise_xor '^' bitwise_and
	| bitwise_and
	;
bitwise_and:
	| bitwise_and '&' shift_expr
	| shift_expr
	;
shift_expr:
	| shift_expr '<''<' sum
	| shift_expr '>''>' sum
	| sum
	;
sum:
	| sum '+' term
	| sum '-' term
	| term
	;
term:
	| term '*' factor
	| term '/' factor
	| term '/''/' factor
	| term '%' factor
	| term '@' factor
	| factor
	;
factor:
	| '+' factor
	| '-' factor
	| '~' factor
	| power
	;
power:
	| await_primary '*''*' factor
	| await_primary
	;
await_primary:
		| AWAIT primary
		| primary
		;
primary:
      	//| invalid_primary  //# must be before 'primay genexp' because of invalid_genexp
        | primary '.' NAME
        | primary genexp
        | primary '('  SQUAREBRACKET_START arguments SQUAREBRACKET_END  ')'
        | primary  SQUAREBRACKET_START  slices  SQUAREBRACKET_END 
        | atom
    ;
slices:
	| slice '!'','
	| ',''.'slice'+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
	;
slice:
	|  SQUAREBRACKET_START expression SQUAREBRACKET_END  ':'  SQUAREBRACKET_START expression SQUAREBRACKET_END   SQUAREBRACKET_START ':'  SQUAREBRACKET_START expression SQUAREBRACKET_END   SQUAREBRACKET_END 
	| named_expression
	;
atom:
	| NAME
	| TRUE
	| FALSE
	| NONE
	| strings
	| INTEGER
	| '('tuple '|' group '|' genexp')'
	| '('list '|' listcomp')'
	| '('dict '|' set '|' dictcomp '|' setcomp')'
	| '.''.''.'	
	;
strings: STRING'+'
		;
list:
	|  SQUAREBRACKET_START   SQUAREBRACKET_START star_named_expressions SQUAREBRACKET_END   SQUAREBRACKET_END 
	;
listcomp:
	|  SQUAREBRACKET_START  named_expression for_if_clauses  SQUAREBRACKET_END 
	;
tuple:
	| '('  SQUAREBRACKET_START star_named_expression ','  SQUAREBRACKET_START star_named_expressions SQUAREBRACKET_END   SQUAREBRACKET_END  ')'
	;
group:
	| '(' '('yield_expr '|' named_expression')' ')'
	;
genexp:
	| '(' '(' assigment_expression '|' expression '!'':'EQUAL')' for_if_clauses ')'
	;
set: '{' star_named_expressions '}'
	;
setcomp:
	| '{' named_expression for_if_clauses '}'
	;
dict:
	| '{'  SQUAREBRACKET_START double_starred_kvpairs SQUAREBRACKET_END  '}'
	//| '{' invalid_double_starred_kvpairs '}'
	;
dictcomp:
	| '{' kvpair for_if_clauses '}'
	;
double_starred_kvpairs: ',''.'double_starred_kvpair'+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
		;
double_starred_kvpair:
	| '*''*' bitwise_or
	| kvpair
	;
kvpair: expression ':' expression
	;
for_if_clauses:
	| for_if_clause'+'
	;
for_if_clause:
	| ASYNC FOR star_targets IN '~' disjunction '('IF disjunction ')''*'
	| FOR star_targets IN '~' disjunction '('IF disjunction ')''*'
	;
yield_expr:
    | YIELD FROM expression
    | YIELD  SQUAREBRACKET_START star_expressions SQUAREBRACKET_END 
    ;
arguments:
	| args  SQUAREBRACKET_START ',' SQUAREBRACKET_END  '&'')'
	;
args:
	| ',''.''('starred_expression '|' '(' assigment_expression '|' expression '!'':'EQUAL')' '!'EQUAL')''+'  SQUAREBRACKET_START 
	| kwargs
	;
kwargs:
	| ',''.'kwarg_or_starred'+' ',' ',''.'kwarg_or_double_starred'+'
	| ',''.'kwarg_or_starred'+'
	| ',''.'kwarg_or_double_starred'+'
	;
starred_expression:
	| '*' expression
	;
kwarg_or_starred:
	| NAME EQUAL expression
	| starred_expression
	;
kwarg_or_double_starred:
	| NAME EQUAL expression
	| '*''*' expression
	;
			//# NOTE: star_targets may contain *bitwise_or, targets may not.
star_targets:
	| star_target '!'','
	| star_target '('',' star_target ')''*'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
	;
star_targets_list_seq: ',''.'star_target'+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
			;
star_targets_tuple_seq:
	| star_target '('',' star_target ')''+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
	| star_target ','
	;
star_target:
	| '*' '(''!''*' star_target')'
	| target_with_star_atom
	;
target_with_star_atom:
	| t_primary '.' NAME '!'t_lookahead
	| t_primary  SQUAREBRACKET_START  slices  SQUAREBRACKET_END  '!'t_lookahead
	| star_atom
	;
star_atom:
	| NAME
	| '(' target_with_star_atom ')'
	| '('  SQUAREBRACKET_START star_targets_tuple_seq SQUAREBRACKET_END  ')'
	|  SQUAREBRACKET_START   SQUAREBRACKET_START star_targets_list_seq SQUAREBRACKET_END   SQUAREBRACKET_END 
	;
single_target:
	| single_subscript_attribute_target
	| NAME
	| '(' single_target ')'
	;
single_subscript_attribute_target:
	| t_primary '.' NAME '!'t_lookahead
	| t_primary  SQUAREBRACKET_START  slices  SQUAREBRACKET_END  '!'t_lookahead
	;
expression_list :  expression '('',' expression')' '*'  SQUAREBRACKET_START  ','  SQUAREBRACKET_END 
			;
del_targets: ',''.'del_target'+'  SQUAREBRACKET_START ',' SQUAREBRACKET_END 
		;
del_target:
	| t_primary '.' NAME '!'t_lookahead
	| t_primary  SQUAREBRACKET_START  slices  SQUAREBRACKET_END  '!'t_lookahead
	;
del_t_atom:
	| NAME
	| '(' del_target ')'
	| '('  SQUAREBRACKET_START del_targets SQUAREBRACKET_END  ')'
	|  SQUAREBRACKET_START   SQUAREBRACKET_START del_targets SQUAREBRACKET_END   SQUAREBRACKET_END 
	;
t_primary:
	| t_primary '.' NAME '&'t_lookahead
	| t_primary  SQUAREBRACKET_START  slices  SQUAREBRACKET_END  '&'t_lookahead
	| t_primary genexp '&'t_lookahead
	| t_primary '('  SQUAREBRACKET_START arguments SQUAREBRACKET_END  ')' '&'t_lookahead
	| atom '&'t_lookahead
	;
t_lookahead: '(' |  SQUAREBRACKET_START  | '.'
	;
   
  
%%

int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",lineno);
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