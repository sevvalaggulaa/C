#include <stdio.h>
#include <stdlib.h>
/* A C program that lists odd numbers up to
 a positive integer n entered from the keyboard */
	
void oddnumbers(int num)
{
	int i=0;
	while(i<num)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
}

int main() {
	int num;
	printf("please enter a number = \n");
	scanf("%d",&num);
	oddnumbers(num);
	
	return 0;
}
