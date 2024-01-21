#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	
	char a[2];
	char b[2];
	int result;
	
	printf("***** comparing the ASCII values of the entered characters *****\n\n");
	printf("please enter a character= ");
	scanf("%s",a);
	
	printf("please enter a character= ");
	scanf("%s",b);
	 
	printf("\n");
	
	printf("The ASCII value of %s = %d\n",a,a[0]);
	printf("The ASCII value of %s = %d\n",b,b[0]);
	
	printf("\n");
	
	result=strncmp(a,b,100);
	
	if(result<0)
	{
		printf("The ASCII value of the character %s is less than the ASCII value of %s.",a,b);
	}
	else if(result==0)
	{
		printf("The ASCII value of the character %s is equal to the ASCII value of %s.",a,b);
	}
	else
	{
		printf("The ASCII value of the character %s is greater than the ASCII value of %s.",a,b);
	}

	
	return 0;
}
