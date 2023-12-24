/*
Switch is used as as convenience tool in place of if else statements
Rules for defining switch case
1. Switch expression should be an integer or a character
2. Case must be an integer or a character
3. Case is always contained inside the switch 
4. break is not necessary
*/

#include<stdio.h>

int main(){
    int age,complimentary;
    printf("Hello welcome to MacMohan's !!");
    printf("Are you above 18 years ? : Yes(1)  No(0) : ");
    scanf("%d",&age);
    
    switch (age)
    {
    case 1:

        printf("What would you like to have as a complimentary drink ? 1.Beer 2.Rum 3.Whiskey : ");
        scanf("%d",&complimentary);
        switch (complimentary)
        {
        case 1:
            printf("You are above 18 years and we are happy to serve you Beer as complimentary drink");
            /* code */
            break;
        case 2:
            printf("You are above 18 years and we are happy to serve you Rum as complimentary drink");
            break;
        case 3:
            printf("You are above 18 years and we are happy to serve you Whiskey as complimentary drink");
            break;
        }
    break;
    case 0:

        printf("What would you like to have as a complimentary drink ? 1.Orange juice 2.Apple juice 3.Mixed fruit : ");
        scanf("%d",&complimentary);
        switch (complimentary)
        {
        case 1:
            printf("You are above 18 years and we are happy to serve you Orange juice as complimentary drink");
            /* code */
            break;
        case 2:
            printf("You are above 18 years and we are happy to serve you Apple juice as complimentary drink");
            break;
        case 3:
            printf("You are above 18 years and we are happy to serve you Mixed fruit juice as complimentary drink");
            break;
        }
      
    

    }
    return 0;

}

    

