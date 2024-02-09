#include <stdio.h>
#include <stdlib.h>
// A program that finds the number 
//of words in a sentence entered from the keyboard.
int main() {
	char sentence[100];
	int i=0,counter=0;
	printf("please enter a sentence:\n");
	gets(sentence);
	while(sentence[i])
	{
		if(sentence[i]==32)
		{
			counter++;
		}
		i++;
	}
	printf("Number of words in the sentence you entered = %d", counter + 1);
	return 0;
}
