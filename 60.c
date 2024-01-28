#include <stdio.h>
#include <stdlib.h>

/* iki sayinin carpiminin pozitif mi negatif mi old gösteren program */

int main() {
	
	int a,b;
	printf("please enter 2 numbers= ");
	scanf("%d%d",&a,&b);
	if(a==0 || b==0)
	{
		printf("The product of two numbers is 0.");
	}
	else if((a<0 && b<0)||(a>0 && b>0))
	{
		printf("The product of two numbers is positive.");
	}
	else
	{
		printf("The product of two numbers is negative.");
	}
	
	return 0;
}
