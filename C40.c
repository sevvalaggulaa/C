#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i=1;
	float result=0;
	
	do
	{
		printf("please enter a number= ");
	    scanf("%d",&n);
	}
	while(n<1);
	
	for(i=1;i<=n;i++)
	{
		result+=(float)1/i;
	}
	printf("result= %.3f",result);
	return 0;
}
