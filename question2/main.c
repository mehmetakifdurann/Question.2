// Write a program in c to check if a given number is even or odd using a function.

// Created by Mehmet Akif Duran, 03 Jan 2024

/*
 Example output:
    This program checks that your number is even or odd.
    Enter the number that you want to check (Enter 0 if you want to quit): 25
    25 is an odd number.
    Enter the number that you want to check: (Enter 0 if you want to quit): 24
    25 is an even number.
    Enter the number that you want to check : (Enter 0 if you want to quit): 0
    !! PROGRAM ENDS !!

 */

#include <stdio.h>
#include <stdlib.h>

void checker(int number){
    
    if(number % 2 == 0)
        printf("%d is an even numnber.\n",number);
    else if(number % 2 == 1)
        printf("%d is an odd number\n",number);
}

int main (){
    
    int op;
    int number1;
    printf("This program checks that your number is even or odd.\n");

    do{
        
        printf("Enter the number that you want to chec (Enter 0 if you want to quit):  \n");
        scanf("%d", &number1);
        checker(number1);
        
        if(number1 == 0){
            printf("! ! THE PROGRAM ENDS ! !");
            return 0;
        }
        
    }while(op != 0 );
    return 0 ;
}
