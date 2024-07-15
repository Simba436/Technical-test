/*
    Design a function that takes a string or sequence of characters as input and 
    returns the character that appears most frequently. 
        //Eg 11189 => '1' 
        //hello => l
*/

#include <stdio.h>
#include <string.h>

char maxcount_maxchar (char input[100], int size)
{
    int count;
    int mode = 0;
    char modalchar;
    int i, j;

    for (i = 0; i < size; i++)
    {
        count = 0;
        for (j = 0; j < size; j++)
        {
            if (input[i] == input[j])
                count++;
        }

        if (mode < count)
        {
            mode = count;
            modalchar = input[i];
        }
    }
    
    return modalchar;
}

int main ()
{
    char input[100];
    char modalchar;

    printf ("Enter string: ");
    scanf ("%s", input);

    int size = strlen (input);

    modalchar = maxcount_maxchar (input, size);

    printf ("The modal character is '%c'\n", modalchar);
    return 0;
}
