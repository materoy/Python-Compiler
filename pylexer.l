digits  [0-9]
num [0-9]+(\.[0-9]+)?([Ee][\+|\-]?[0-9]+)?
integer [0-9]+
string  (\".*\"|\'.*\')
divideequal \/=
mulequal   \*=
minusequal  \-= 
equal  =
plusequal \+=
plus	\+
minus	\-
divide	\/
mul	\*
special_start \(
special_end   \)
alpha [a-zA-Z]

LPAR                    '('
RPAR                    ')'
LSQB                    '['
RSQB                    ']'
COLON                   ':'
COMMA                   ','
SEMI                    ';'
PLUS                    '+'
MINUS                   '-'
STAR                    '*'
SLASH                   '/'
VBAR                    '|'
AMPER                   '&'
LESS                    '<'
GREATER                 '>'
EQUAL                   '='
DOT                     '.'
PERCENT                 '%'
LBRACE                  '{'
RBRACE                  '}'
EQEQUAL                 '=='
NOTEQUAL                '!='
LESSEQUAL               '<='
GREATEREQUAL            '>='
TILDE                   '~'
CIRCUMFLEX              '^'
LEFTSHIFT               '<<'
RIGHTSHIFT              '>>'
DOUBLESTAR              '**'
PLUSEQUAL               '+='
MINEQUAL                '-='
STAREQUAL               '*='
SLASHEQUAL              '/='
PERCENTEQUAL            '%='
AMPEREQUAL              '&='
VBAREQUAL               '|='
CIRCUMFLEXEQUAL         '^='
LEFTSHIFTEQUAL          '<<='
RIGHTSHIFTEQUAL         '>>='
DOUBLESTAREQUAL         '**='
DOUBLESLASH             '//'
DOUBLESLASHEQUAL        '//='
AT                      '@'
ATEQUAL                 '@='
RARROW                  '->'
ELLIPSIS                '...'
COLONEQUAL              ':='

%{
#include<stdio.h>
#include"y.tab.h"
#include<string.h>
extern YYSTYPE yylval;
int t = 1;
int n = 0;
%}

%%
#(.*\n) 	 {printf("comment ");return COMMENT;} 
(''')(.*\n)*(.*)(''') {printf("comment ");return COMMENT;} 

if                      {printf("if ");return IF;}
else                    {printf("else ");return ELSE;}
while                   {printf("while ");return WHILE;}
True                    {printf("True ");yylval=strdup(yytext);return T;}
False                   {printf("False ");yylval=strdup(yytext);return F;}
{plus}			{printf("plus ");yylval=strdup(yytext);return PLUS;}
{minus}			{printf("minus ");return MINUS;}
{mul}			{printf("mul ");return MUL;}
{divide}		{printf("divide ");return DIVIDE;}  
{equal}			{printf("equal ");return EQUAL;}
{plusequal}		{printf("plusequal ");return PLUSEQUAL;}
{divideequal}           {printf("divideequal ");return DIVIDEEQUAL;}
{mulequal}              {printf("mulequal ");return MULEQUAL;}
{minusequal}            {printf("minusequal ");return MINUSEQUAL;}
{special_start}         {printf("special_start ");return SPECIAL_START;}
{special_end}           {printf("special_end ");return SPECIAL_END;}

\n                      {printf("\n");return NEWLINE;}
or                    {printf("or ");return OR;}
and                    {printf("and ");return AND;}
not                     {printf("not ");return NOT;}
in                      {printf("in ");return IN;}
not\ in                 {printf("not in ");return NOTIN;}

global                  {printf("global"); return GLOBAL;}                     
yield                   {printf("yield"); return YIELD;}   
import                  {printf("import"); return IMPORT;}   
return                  {printf("return"); return RETURN;}    
as                      {printf("as"); return AS;}
for                     {printf("for"); return FOR;}
del                     {printf("del"); return DEL;}
nonlocal                {printf("nonlocal"); return NONLOCAL;}       
elif                    {printf("elif"); return ELIF;}   
if                      {printf("if"); return IF;}
True                    {printf("True"); return TRUE;}   
False                   {printf("False"); return FALSE;}   
def                     {printf("def"); return DEF;}
continue                {printf("continue"); return CONTINUE;}       
finally                 {printf("finally"); return FINALLY;}   
pass                    {printf("pass"); return PASS;}   
lambda                  {printf("lambda"); return LAMBDA;}   
assert                  {printf("assert"); return ASSERT;}   
from                    {printf("from"); return FROM;}   
dedent                  {printf("dedent"); return DEDENT;}   
none                    {printf("none"); return NONE;}   
async                   {printf("async"); return ASYNC;}   
class                   {printf("class"); return CLASS;}   
case                    {printf("case"); return CASE;}    
is                      {printf("is"); return IS;}
break                   {printf("break"); return BREAK;}   
raise                   {printf("raise"); return RAISE;}   
with                    {printf("with"); return WITH;}   
await                   {printf("await"); return AWAIT;}    
try                     {printf("try"); return TRY;}
match                   {printf("match"); return MATCH;}   
except                  {printf("except"); return EXCEPT;}    

\<			{printf("lessthan ");return LESSTHAN;}
\<=			{printf("lessthanequal ");return LESSTHANEQUAL;}
\>=			{printf("greaterthanequal ");return GREATERTHANEQUAL;}
\>			{printf("greaterthan ");return GREATERTHAN;}
\==			{printf("doubleequal ");return DOUBLEEQUAL;}
\!=			{printf("notequal ");return NOTEQUAL;}
:                       {printf("colon ");return COLON;}
\[                      {printf("sq bracket start ");return SQUAREBRACKET_START;}
\]                      {printf("sq bracket end ");return SQUAREBRACKET_END;}
\%                      {printf("mod ");return MOD;}
sep			{printf("sep ");return SEP;}
end			{printf("end" );return END;}
print                   {printf("print ");return PRINT;}
range                   {printf("range ");return RANGE;}
list			{printf("list ");return LIST;}
[a-zA-Z_][_a-zA-Z0-9]*  {printf("ID ");yylval=strdup(yytext);return NAME;}
{string}                {printf("string ");yylval=strdup(yytext);return STRING;}
{integer}               {printf("int ");yylval=strdup(yytext);return INTEGER;}
{num}                   {printf("num ");yylval=strdup(yytext);return NUM;}
[0-9;!,@#]*/(({alpha}|"_")({alpha}|{digits}|"_")*) 	{printf("%s\t",yytext);}
\'                       {printf("single quote ");return SINGLEQUOTE;}
\"                      {printf("double quote ");return DOUBLEQUOTE;}
\*\*                    {printf("exp ");return EXPONENTIAL;}
,                       {printf("comma ");return COMMA;}
\t			{printf("indent ");return INDENT;}

%%

int yywrap() {
    return 1;
}