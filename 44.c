#include <stdio.h>
#include <stdlib.h>

int int powerCalculation(int a,int b)
{
	int result=1;
	int i;
	for(i=1;i<=b;i++)
	{
		result=a*result;
	}
	return result;
}

int main() {
	
	int a,b;
	printf("******* Power Calculation ******\n\n");
	printf("Please enter the numerical values in the form of a^b sequentially\n");
	scanf("%d%d",&a,&b);
	printf("%d^%d=%d",a,b,powerCalculation(a,b));
	
	return 0;
}
