/*
Design a function that reverses the digits of an integer. For example, 50 
should become 5 and -12 should become -21.
*/


#include<stdio.h>

int main (void)
{
    int number = 0;
    int reverse = 0;
    int remainder = 0;

    printf ("Enter number: ");
    scanf ("%d", &number);

    int is_negative = (number < 0);
    if (is_negative)
    {
        number = -number;
    }

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10;
        reverse = reverse + remainder;
        number = number / 10;
    }

    if (is_negative)
    {
        reverse = -reverse;
    }

    printf ("Reversed number: %d\n", reverse);

    return 0;
}