#include <stdio.h>
#include <stdlib.h>

float performOperation(float a, float b, char operation)
{
	if(operation=='+')
	{
		return a+b;
	}
	else if(operation=='-')
	{
		return a-b;
	}
	else if(operation=='*')
	{
		return a*b;
	}
	else if(operation=='/')
	{
		return a/b;
	}
	else
	{
		printf("Error: Invalid operation\n");
	}
}
int main() {
	
	int num1,num2;
	char operation;
	printf("please enter two numbers= \n");
	scanf("%d%d",&num1,&num2);
	
	printf("Which operation do you want to perform? (+ - * /)\n");
	scanf(" %c",&operation);
	printf("Result of the operation: %.2f",performOperation(num1,num2,islem));
	return 0;
}
