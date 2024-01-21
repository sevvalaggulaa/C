#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int a,b;
    printf("please enter 2 numbers you want to compare:\n");
    scanf("%d%d",&a,&b);
    printf("\n");
    if(a==b)
    {
    	printf("The value of %d is equal to the value of %d.\n",a,b);
	}
	else
	{
    	printf("The value of %d is not equal to the value of %d.\n",a,b);
	}
	
	if(a<b)
	{
		printf("The value of %d is smaller than the value of %d.\n",a,b);
	}
	if(b<a)
	{
		printf("The value of %d is bigger than the value of %d.\n",a,b);
	}
	
	if(a%b==0 || b%a==0)
	{
		if(a<=b)
		{
			printf("The value of %d is a multiple of the value of %d.\n",b,a);
		}
		else
		{
			printf("The value of %d is a multiple of the value of %d.\n",a,b);
		}
	}
	else
	{
		if(a<b)
		{
			printf("The value of %d is not a multiple of the value of %d.\n",b,a);
		}
		else
		{
			printf("The value of %d is not a multiple of the value of %d.\n",a,b);
		}
	}	

	return 0;
}
