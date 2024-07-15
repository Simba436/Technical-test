/*
    Write a recursive function to calculate the factorial of a number
*/


#include<stdio.h>

int factorial (int number)
{
    if (number == 1|| number == 0)
       return 1;
    else
       return (number * factorial (number - 1));
}

int main ()
{
    int number;
    int answer;

    printf ("Enter the number: ");
    scanf ("%d", &number);
    

    if (number < 0)
    {
        printf ("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        answer = factorial(number);
        printf ("The Factorial of %d is \n %d\n", number, answer);
    }
    
    return 0;
}