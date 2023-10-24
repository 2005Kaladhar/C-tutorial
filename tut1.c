// Basic Structure of a C program
/*

1. Pre processor command
2. Functions
3. Variables
4. Statement and expressions
5. Comments


*/

// This is a preprocessor command this includes the file stdio.h to use in our program
#include<stdio.h>

// This is a special function from where our program starts
// int is the value that the function is going to return
//The returned function value goes to the operating system
int main(){
    int a ;
    printf("This is a line .....\n");
    scanf("%d", &a);
    // Return 0 means that the program has run successfully
    return 'c';

}

/*
Behind the scene
1. Pre-processing
2. Compilation
3. Assembly
4. Linking

Pre-processing - In this process all the content of the header file are copied, comments are removed and macros are expanded and the file is saved with .i extension

Compilation - In this the program is converted to assembly language and saved with .s extension

Assembly - In this process the assembly language is converted to machine level instruction this is a binary file saved with .o extension

Linkning - In this step all the binary files (.o files) are linked to create a single executable file
There are two types of linking -
 Dynamic linking(.dll files ) 
 Static Linking


*/
