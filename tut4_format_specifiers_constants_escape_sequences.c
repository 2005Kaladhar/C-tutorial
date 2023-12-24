/*
Format specifiers, constants and escape sequences in C 
It is used to tell the compiler that what type of data is in the variable when taking input or displaying output to the user.

In c, we cannot print the value stored in the variable and take input from the user without format specifiers.

Some important fromat specifiers
%d - to specify integer
%c - to specify character
%s - string literal
%f - to specify floating point number
%a.bf - to specify the floating point number in a character spaces and upto b decimal number
%l - long (long is used to store large integer values that are too large to be stored in int dataype)
%lf - double (used to store high precision floating point numbers upto 15-17 digits)
%Lf - long double (floating point number that is more precise than double)

unsigned int - it can store positive and zero integers but not negative
-------------------------------------------------------------------------------------------------
Escape sequence is a sequence of characters, they dont represent themselves in the code rather they represent a single character int the program

\n - new line character
\t - inserts a tab
\v - vertical tab
\\ - to print \ 
\" - to print "
\' - to print '

-----------------------------------------------------------------------------------------------
Constant are those values in the program that dont change during the execution of the program
There are two ways of defining a constant 
1. Using const keyword
const var = 233;

2. Using #define preprocessor command
#define pi 3.14

NOTE - In preprocessing commands no semicolon is required

*/

#include<stdio.h>
#define nalla "berozgaar chapri nibba"
int main() {
    int a ;
    float b = 23.131231313123;
    a = 23;
    printf("%d\n",a);

    //Following have the same output    
    printf("%.3f\n",b);
    printf("%0.3f\n",b);
//---------------------------------------------------------

    printf("%9.3f\n",b); // This will give spaces in front 
    printf("%-9.3f Hello ji namaste\n",b); // This will add spaces at the end
    printf("%s",nalla);

    return 0;
}
