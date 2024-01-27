#include <stdio.h>
#include <stdlib.h>

int evenorodd(int num)
{
	return num%2;
}
int main() {
	
	int num,result;
	printf("Please enter a number to determine whether it is even or odd=\n");
	scanf("%d",&num);
	result=evenorodd(num);
	if(result==1)
	{
		printf("%d is an odd number.",num);
	}
	else
	{
		printf("%d is an even number.",num);
	}
	return 0;
}
