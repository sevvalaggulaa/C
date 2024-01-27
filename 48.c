#include <stdio.h>
#include <stdlib.h>

int compare(int num1,int num2)
{
	if(num1<num2)
	{
		return 0;
	}
	else if(num1==num2)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
int main() {
	int num1,num2,result;
	printf("please enter 2 numbers to determine which one is greater=\n");
	scanf("%d%d",&num1,&num2);
	result=compare(num1,num2);
	if(result==0)
	{
		printf("%d < %d\n%d is greater ",num1,num2,num2);
	}
	else if(result==1)
	{
		printf("%d = %d\nnumbers are equal ",num1,num2);
	}
	else
	{
		printf("%d > %d\n%d is greater ",num1,num2,num1);
	}
	return 0;
}
