@echo Compiling lexer ...
flex pylexer.l

@echo Compiling parser with yacc ...
bison -d -y pyparsergen.y

@echo Now gccing ...
gcc lex.yy.c y.tab.c -lm -w -o parser


