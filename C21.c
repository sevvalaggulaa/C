#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,max,min;
	printf("Please enter the 3 numbers you want to compare=\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n\n");
	max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	printf("%d is the biggest number.\n",max);
	
	min=a;
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	printf("%d is the smallest number.\n",min);
	
return 0;
}
