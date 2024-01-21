#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,i=1,result=0;
	printf("please enter a number= ");
	scanf("%d",&a);
	
	while(i<=a)
	{
		if(i<a)
		{
			printf("%d + ",i);
		}
		else
		{
			printf("%d = ",i);
		}
		result=result+i;
		i++;
	}
	printf("%d",result);
	return 0;
}
