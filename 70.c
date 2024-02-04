#include <stdio.h>
#include <stdlib.h>

/* A program that prints the letters of a sentence
 entered from the keyboard vertically */

int main() {
    char sentence[100];
    int i;

    printf("Please enter a sentence.\n");
    gets(sentence);
    
    for (i = 0; sentence[i]; i++) 
	{
        printf("%c\n", sentence[i]);
    }

    return 0;
}
