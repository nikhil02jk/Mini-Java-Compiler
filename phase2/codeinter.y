%{
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include "lex.yy.c"
#include<ctype.h>


void codegen_umin();
void push();
void pushId(char *name);
void codegen();
void codegen_umin();
void codegen_assign();
void yyerror (char const *);
void printStack();
void lab1();
void  lab2();
void lab3() ;
void lab1f();
void lab2f();
void lab3f() ;
void lab4f();
void my_itoa(int num, char temp1[20]);
void print_INT_CODE();
int isDigit(char t[100]);
void copy();
//extern char yytext[];

struct OPT
{
	char op[10];
	char arg1[10];
	char arg2[10];
	char result[10];
};

struct OPT QIC[100];
struct OPT OPT[100];
int ind = 0;
int oind =0;

%}

%union 
{
        int number;
        char *string;
        bool *boo;
       
        
}

%token <number> NUM DECIMAL
%token <string> IDENTIFIER
%type<number> arithm_e 
//%type<number> assign_e
%type<string> ids1
%type<string> ids2
%type<string> ids3
%type<number> rel_e

%token CONSTANT STRING_LITERAL
%token INC_OP DEC_OP LE GE EQ NE_OP DEQ
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD ADD_ASSIGN
%token SUB_ASSIGN
%token TYPEDEF STATIC
%token CHAR INT FLOAT CONST VOID
%token IF ELSE FOR GOTO CONTINUE BREAK RETURN
%token TRUE1 FALSE1 BOOLEAN
%token IMPORT CLASS PACKAGE MAIN STRING ARGS PUBLIC SOP
%token OC CC OF CF OS FS 
%token ADD SUB MUL DIV LT GT COMMA COL DOT
%token BIT_AND NOT EXP BIT_OR QUE SEMC


%right EQ
%left ADD SUB
%left MUL DIV
%right LT GT NE LE GE DEQ


%%

S: compilation_unit	{printf("\nLine No. is %d  \n ACCEPTED\n\n\n\n",yylineno);  print_INT_CODE();  } //codegen_assign();}
 
  ;
compilation_unit: package_statement import_statement class_stmt 
                 ;
package_statement: PACKAGE IDENTIFIER SEMC
                 ;
import_statement: IMPORT IDENTIFIER  DOT MUL SEMC 
			 | IMPORT class_name SEMC 
                         | IMPORT MUL SEMC
                         |
			 ;

class_name: IDENTIFIER 
        ;
class_stmt: PUBLIC CLASS class_name  OF main_method CF 
          ;
main_method: PUBLIC STATIC VOID MAIN OC STRING OS FS ARGS CC OF sl CF 
            ;

sl: sl s1
  |
  ;

s1: variable_declaration  SEMC   
    | expression  SEMC
    | if_stmt 
    |for_stmt 
    | SEMC
    ;

variable_declaration: dtypes
                    ;

dtypes: INT ids1 
        | FLOAT  ids2 
	| BOOLEAN  ids3 
        ;

ids1: IDENTIFIER { pushId($1);} EQ {push();} arithm_e { codegen_assign();}	
   | ids1 COMMA IDENTIFIER	
   | IDENTIFIER 
  
   ;

ids2: IDENTIFIER {/*printf("pushing identifier");*/ pushId($1);} EQ {push();} arithm_e { codegen_assign();}    
   | ids2 COMMA IDENTIFIER	
   | IDENTIFIER	//{push();}		
   ;

ids3: IDENTIFIER {pushId($1);} EQ {push();} rel_e {/*printStack();*/  codegen_assign();}
   | ids3 COMMA IDENTIFIER	
   | IDENTIFIER	//{push();}		
   ;

expression:rel_e 
          | arithm_e 
       
          ;

rel_e: arithm_e LT{push();} arithm_e {codegen();}
          | arithm_e GT{push();} arithm_e {codegen();} 	
          | arithm_e LE{push();} arithm_e {codegen();}  	
          | arithm_e GE{push();} arithm_e {codegen();} 	
          | arithm_e DEQ{push();} arithm_e {codegen();} 	
          | arithm_e NE_OP{push();} arithm_e {codegen();} 	
	  | IDENTIFIER{ pushId($1);} EQ{push();} rel_e {codegen_assign();}
          | TRUE1 {push();}			
          | FALSE1 {push();}			
	  | arithm_e
          ;


arithm_e:arithm_e ADD {push();} arithm_e{ /*printStack();*/ codegen();}
      |arithm_e SUB {push();} arithm_e{/* printStack();*/codegen();}
      |arithm_e MUL {push();} arithm_e{/* printStack();*/ codegen();}
      |arithm_e DIV {push();} arithm_e{ /*printStack();*/ codegen();}
      |IDENTIFIER {pushId($1);} EQ {push();} arithm_e  {/*printStack();*/ codegen_assign();}
      |IDENTIFIER {  pushId($1);} 
      |{printf("");}NUM {push();}
     
      |IDENTIFIER {pushId($1);} INC_OP {push();} 
      |IDENTIFIER {pushId($1);} DEC_OP {push();} 
      
      ;




if_stmt:	
	 IF OC rel_e CC {printf("\n");lab1();} OF sl CF {lab2();} ELSE OF sl CF {lab3();} 
	;



for_stmt: FOR OC for_args CC OF sl CF {lab4f(); } //exit(0);}
          ;

for_args: arg1{lab1f();} SEMC arg2{lab2f();} SEMC arg3 {lab3f();}
       ; 

arg1: variable_declaration 
       |expression 
       | 
       ;


arg2: rel_e 
     |
     ;

arg3:arithm_e 
     |
     ;


%%


void yyerror (char const *s)
{
fprintf (stderr, "%s\n", s);
  printf("Error occured at  Line No.  %d\n" , yylineno);
 
   printf("Error after : %s\n" , yytext);
 exit(0); 
}
char st[100][10];
int top=0;
int i_ = 0;
char si[20];

char temp[2]="t";

int label[20];
int lnum=0;
int ltop=0;
int start=1;
char ss[20];
char l[1] = "L";

int main()
{
yyparse();
return 1;
}



void push()
{
//printf("pushing YYtext is %s\n",yytext);
strcpy(st[++top],yytext);
}


void pushId(char *name)
{
//printf("pushing yylval is %s\n",name);
strcpy(st[++top],name);
}



void codegen()
{
strcpy(temp,"t");
my_itoa(i_ , si);
strcat(temp, si);
strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , st[top-1]);
strcpy(QIC[ind].arg1, st[top-2]);
strcpy(QIC[ind].arg2 , st[top]);
ind++;
printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
top-=2;
strcpy(st[top],temp);
i_++;
}


void codegen_umin()
{
strcpy(temp,"t");


my_itoa(i_ , si);
strcat(temp, si);

printf("%s = -%s\n",temp,st[top]);
top--;
strcpy(st[top],temp);
i_++;
}

void codegen_assign()
{
strcpy(QIC[ind].result , st[top-2]);
strcpy(QIC[ind].op , "=");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;

printf("%s = %s\n",st[top-2],st[top]);
top-=2;
}


void printStack()
{
int i = top;
printf("Printing Curr stack\n");
while(i>-1){
	printf("%s \n",st[i]);
	i = i-1;
}
}



void lab1()   //Create a new label - after a not condition
{
 lnum++;
 strcpy(temp,"t");


my_itoa(i_ , si);
strcat(temp, si);

strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , "= not");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;
 printf("%s = not %s\n",temp,st[top]);

my_itoa(lnum, ss);
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "if goto");
strcpy(QIC[ind].arg1, temp);
strcpy(QIC[ind].arg2 , "");
ind++;

 printf("if %s goto L%d\n",temp,lnum);
 i_++;
 label[++ltop]=lnum;
}

void  lab2()  // Create an unconditional label
{
int x;
lnum++;
x=label[ltop--];

my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss , l ));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("goto L%d\n",lnum);


my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("L%d: \n",x);
label[++ltop]=lnum;
}

void lab3()   //Add created label
{
int y;
y=label[ltop--];

my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("L%d: \n",y);
}
 
void lab1f()
{
	my_itoa(lnum ,ss );
	strcpy(QIC[ind].result , strcat(ss ,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
    	printf("L%d: \n",lnum++);
}

void lab2f()  // if with 2 labels 
{
    strcpy(temp,"t");
    
my_itoa(i_ , si);
strcat(temp, si);

strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , "= not");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;
 printf("%s = not %s\n",temp,st[top]);

my_itoa(lnum, ss);
strcpy(QIC[ind].result , strcat(ss, l));
strcpy(QIC[ind].op , "if goto");
strcpy(QIC[ind].arg1, temp);
strcpy(QIC[ind].arg2 , "");
ind++;

 printf("if %s goto L%d\n",temp,lnum);



    i_++;
    label[++ltop]=lnum;
    lnum++;


	my_itoa(lnum, ss);
	strcpy(QIC[ind].result , strcat(ss , l));
	strcpy(QIC[ind].op , "if goto");
	strcpy(QIC[ind].arg1, temp);
	strcpy(QIC[ind].arg2 , "");
	ind++;
	 printf("if %s goto L%d\n",temp,lnum);

	
	my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l ));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d\n",lnum);
    label[++ltop]=lnum;


	my_itoa(++lnum ,ss );
	strcpy(QIC[ind].result , strcat(ss,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
	printf("L%d: \n",lnum);
 }
void lab3f()
{
    int x;
    x=label[ltop--];

	my_itoa(start ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d \n",start);


	my_itoa(x ,ss );
	strcpy(QIC[ind].result , strcat(ss,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
    printf("L%d: \n",x);
   
}

void lab4f()
{
    int x;
    x=label[ltop--];


	my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d \n",lnum);   


	my_itoa(x ,ss );
	strcpy(QIC[ind].result , strcat(ss,l));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;

    printf("L%d: \n",x);
}

void my_itoa(int num, char temp1[20])
{
	sprintf(temp1,"%d",num);
	//return temp1;
}







void print_INT_CODE()
{
	int i;
	printf("the value of ind %d\n",ind);
	printf("\n--------------------------------------------------------\n");
	printf("\nINTERMEDIATE CODE\n\n");
	printf("--------------------------------------------------------\n");
	printf("--------------------------------------------------------\n");
	printf("\n%17s%10s%10s%10s%10s","post","op","arg1","arg2","result\n");
	printf("--------------------------------------------------------\n");
	
	for(i=0;i<ind;i++)
	{
		printf("\n%15d%10s%10s%10s%10s", i,QIC[i].op, QIC[i].arg1,QIC[i].arg2,QIC[i].result);
	}
	printf("\n\t\t -----------------------");
	printf("\n");
	
}














int counter =0 ;



int isDigit(char t[100])
{
	//printf("inside digit %s\n",t);
	if(t!=NULL)
	{
		int check=atoi(t);
		//printf("value of check %s for %d\n",t,check);
		if(check==0)
			return 1;
		else
			return 0;
	}
	return 1;
}




void copy()
{
  oind=ind;
  int i=0;
  for(i=0;i<ind;i++)
  {
	OPT[i] = QIC[i];
  }
}



























