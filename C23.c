#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,a;
	printf("please enter a number= ");
	scanf("%d",&a);
	
	i=a;
	while(i!=0)
	{
		printf("%2d ",i);
		i--;
	}
	
	return 0;
}
