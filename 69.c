#include <stdio.h>
#include <stdlib.h>

int main() {
	char letter;
	int position;
	printf("Please enter a letter: ");
	scanf("%c",&letter);
	
	if ((letter >= 'A') && (letter <= 'Z')) 
	{
        position = (int)letter - (int)'A' + 1;
    } 
	else if ((letter >= 'a') && (letter <= 'z')) 
	{
        position = (int)letter - (int)'a' + 1;
    } 
	else 
	{
        printf("Invalid character entered.\n");
        return 1;
    }
	
	printf("%c is the %dth letter.\n", letter, position);
	
	return 0;
}
