#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char word[100];
	printf("Please enter a word: \n");
	gets(word);
	int i,j;
	
	for(i=0;i<=strlen(word);i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%c ",word[j]);
		}
		printf("\n");
	}
	return 0;
}
