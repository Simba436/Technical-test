/*
Design a function that determines whether a given string is a pangram. A 
pangram is a sentence or phrase containing every letter of the alphabet at 
least once. Punctuation and case are typically ignored. For example, the 
string "The quick brown fox jumps over the lazy dog" is a pangram, while 
"Hello, world!" is not. 
*/



#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//pangram function
bool pangram(char str[])
{
    bool alphabet[26] = {false};
    int index;

    for (int i = 0; str[i] != '\0';i++)
    {
        char x = str[i];
        if (x >= 'A' && x <= 'Z')
        {
            x = x + ('a' - 'A');
        }

        if (x >= 'a' && x <= 'z')
        {
            index = x - 'a';
            alphabet[index] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if(!alphabet[i])
        {
            return false;
        }
    }

    return true;
}

//main function
int main()
{
    char input[300];
    printf ("Enter phrase or sentence: \n");
    scanf ("%s", input);

    if (pangram(input))
    {
        printf ("This phrase is a pangram!!!\n");
    }
    else
    {
        printf ("This phrase is not a pangram!!!\n");
    }

    return 0;
}