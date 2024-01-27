#include <stdio.h>
#include <stdlib.h>


int factorial(int i)
{
	int j,result=1;
	for(j=1;j<=i;j++)
	{
		result=j*result;
	}
	return result;
}

int main() {
	
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d!= %d\n",i,factorial(i));
	}
	return 0;
}
