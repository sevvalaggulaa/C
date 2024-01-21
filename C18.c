#include <stdio.h>
#include <stdlib.h>

float fouroperations(float num1,float num2,char operators)
{
	if(operators == '+')
	{
		return num1+num2;
	}
	else if(operators=='-')
	{
		return num1-num2;
	}
	else if(operators=='*')
	{
		return num1*num2;
	}
	else if(operators=='/')
	{
		return num1/num2;
	}
	else 
	{
		printf("error");
	}
	
}

int main()
{
	
	float num1,num2;
	char operators;
	
	printf("Which mathematical operation do you want to perform? (+ - * /)\n");
	scanf("%c",&operators);
	
	printf("please enter two numbers= \n");
	scanf("%f%f",&num1,&num2);
	printf("%.2f",fouroperations(num1,num2,operators));
	
	
return 0;
}

