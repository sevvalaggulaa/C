#include <stdio.h>
#include <stdlib.h>

int factorial(int number)
{
	int result=1,i;

	for(i=1; i<=number; i++)
	{
		result=result*i;
	}
	return result;
}

int main() {
	int number;
	printf("Please enter the number to calculate its factorial: ");
	scanf("%d",&number);
	printf("Result of the operation: %d",factorial(number));
	
	return 0;
}
