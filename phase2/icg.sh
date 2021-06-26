lex code.l
yacc -vd codeinter.y
gcc y.tab.c -o inter -ll 
./inter < b.java
