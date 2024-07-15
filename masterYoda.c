/*
Master Yoda, a renowned Jedi Master from the Star Wars universe, is known 
for his unique way of speaking. He often reverses the order of words in his 
sentences. For example, instead of saying "I am home" he might say "Home 
am I" Design a function that takes a sentence as input and returns a new 
sentence with the words reversed in the same order that Master Yoda would 
use.
*/


#include <stdio.h>
#include <string.h>

void YodaSpeech(char sentence[]) {
    int start = 0, end = 0, len;
    len = strlen(sentence);

    // Reverse each word in the sentence
    while (end <= len) {
        if (sentence[end] == ' ' || sentence[end] == '\0') {
            // Reverse the word between start and end - 1
            for (int i = start, j = end - 1; i < j; i++, j--) {
                char temp = sentence[i];
                sentence[i] = sentence[j];
                sentence[j] = temp;
            }
            start = end + 1;
        }
        end++;
    }

    // Reverse the entire sentence
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = temp;
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if it's there
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    YodaSpeech(sentence);

    printf("Yoda-style sentence: %s\n", sentence);

    return 0;
}
