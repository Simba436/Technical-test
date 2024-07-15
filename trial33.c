/*
Design a function that takes a list of integers as input. The function should 
return True if the list contains two consecutive threes (3 next to a 3) anywhere 
within the list. Otherwise, it should return False. For example, the function 
should return True for [1, 3, 3] and False for [1, 3, 1, 3]. 
*/


#include <stdio.h>
#include <stdbool.h>

bool trial33 (int list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if(list[i] == 3 && list[i + 1] == 3)
        {
            return true;
        }
    }
}

int main ()
{
    int size;
    
    printf("Enter the list of Integers: ");
    scanf("%d", &size);
    
    int list[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }

    if(trial33(list, size))
    {
        printf("The list contians consecutive three.\n");
    }
    else
    {
        printf("The list does not contain consecutive three.\n");
    }

    return 0;
}