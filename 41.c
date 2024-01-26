#include <stdio.h>
#include <stdlib.h>


int sum(int a1, int a2)
{
	return a1+a2;
}

int main() {
	
	int num1,num2;
	printf("please enter 2 numbers=\n");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
	printf("sum of numbers= %d",sum(num1,num2));
	return 0;
}
