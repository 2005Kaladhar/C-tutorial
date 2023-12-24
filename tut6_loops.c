/*
Loops are required for the re-usabillity of the code and to traverse the elements from a data.
1. do while loop
2. while loop
3. for loop

1. do while loop - this loop iterates atleast once. loop is executed irrespective of the condition

syntax 
do {
    code to be executed;
} while (condition);

example 
int i =2;
    do
    {
        i = i+1;
        printf("Hello world this is Kaladhar, inside the loop");
    } while (i<2);
This loop will be executed atleast once and will print even though the value of i is already 2.
-------------------------------------------------------------------------------------------------------
2. while loop - it will iterate till the condition is true
to create an infinite loop make condition 1
syntax 
while (condition){

}

example
 int i=0;
    while (i<10){
        printf("Hello world (%d)\n",i);
        i+=1;
    }
-----------------------------------------------------------------------------------------------


*/

#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int i=0;
    while (i<10){
        printf("Hello world (%d)\n",i);
        i+=1;
    }
    return 0;
}


