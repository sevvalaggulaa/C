#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	
	int evenorodd(int num){
		if(num%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
		
}	
	int number;
	int result;
	
	printf("please enter a number= ");
	scanf("%d",&number);
	result=evenorodd(number);
	
	if (result==1)
	{
		printf("even");
	}
	if (result==0)
	{
		printf("odd");
	}
	
	return 0;
}
