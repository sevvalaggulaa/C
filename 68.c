#include <stdio.h>
#include <stdlib.h>

int main() {
	char op;
	int a,b;
	printf("please enter the operator= (+ or -)\n");
	scanf(" %c",&op);
	printf("please enter 2 numbers= \n");
	scanf("%d%d",&a,&b);
	
	if(a!=0 || b!=0)
	{
		printf("1/%d %c 1/%d= ",a,op,b);
		switch(op)
		{
			case '+':
			{
				printf("%d/%d",a+b,a*b);
			}
			break;
			
			case '-':
			{
				printf("%d/%d",a-b,a*b);
			}
			break;
			default:
				{
					printf("Invalid operator entered.\n");
				}
		}
	}
	else
	{
		printf("Error: Numbers cannot be equal to zero.\n");
	}
	
	
	return 0;
}
