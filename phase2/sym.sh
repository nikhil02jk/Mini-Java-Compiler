lex code.l
yacc -vd codeSymbolTable.y
gcc y.tab.c -o sym -ll 
./sym < inp_final.java
