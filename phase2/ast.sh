lex code.l
yacc -vd codeAST.y
gcc y.tab.c -o ast -ll 
./ast < inp_final.java
