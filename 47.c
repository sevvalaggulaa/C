#include <stdio.h>
#include <stdlib.h>

int perfectnumber(int number)
{
	int i=1,sum=0;
	while(i<number)
	{
		if(number%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	int number,result;
    printf("Please enter a number to determine whether it is a perfect number or not= \n");
    scanf("%d",&number);
    
    result = perfectnumber(number);
    
    if(result==1)
    {
    	printf("%d is a perfect number.",number);
	}
	else
	{
		printf("%d is not a perfect number.",number);
	}
    
	return 0;
}
