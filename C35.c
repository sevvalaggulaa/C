#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("please enter a number= ");
	scanf("%d",&number);
	
	if((number%13==0)&&(number%17==0))
	{
		printf("%d is divisible by 13 and 17.\n",number);
	}
	else if(number%17==0)
	{
		printf("%d is divisible by 17.\n",number);
	}
	else if(number%13==0)
	{
		printf("%d is divisible by 13.\n",number);
	}
	else
	{
		printf("%d is not divisible by 13 or 17.",number);
	}
	return 0;
}
