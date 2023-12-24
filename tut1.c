//Parts of a C program
/*
Following are the parts of a C program :
1. Pre-processing command
2. Function
3. Variables
4. Statement and Expression
5. Comments

## Difference between statement and expression
Expression is something that produces a value
and satement is a piece of code that does a specific function

example :
1. iq = 233
2. age = iq/20

iq/20 - THis produces a value and therefore is an expression
and complete line 2 is a statement that assigns a value to the variable age
and similarly line 1 is also a statement that assigns a value to the variable iq

-------------------------------------------------------------------------------------------------
These are the tokens in C language
"Tokens" are the building block of a program
There are 5 tokens :
1.keywords
2.identifier 
3.string literal
4.constant
5.symbol 

-------------------------------------------------------------------------------------------------

## Datatypes in C 
There are 4 major datatypes
1. Basic datatypes - int, char, float, long, double etc.
2. Derived datatyeps - arrayas, pointer, structure, union 
3. Enumeration datatype - enum
4. Void datatype - void

*/

#include<stdio.h>

int main()
{
    int a;
    a = 100;
    printf("hello world this is kaladhar gopal and I am a good boy \n");
    printf("Printing size of variable 'a' = %d",sizeof(a));
    return 0;
    
}
