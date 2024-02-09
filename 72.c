#include <stdio.h>
#include <stdlib.h>

/* A program that finds the number of 
characters in a sentence entered from the keyboard */

int main() {
	char sentence[100];
	int i=0;
	printf("Please enter a sentence: \n");
	gets(sentence);
	
	while(sentence[i])
	{
		i++;
	}
	printf("Number of characters in the sentence = %d",i);
	return 0;
}
