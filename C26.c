#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("please enter 2 numbers= \n");
	scanf("%d%d",&a,&b);
	
	if((a<0 && b<0)||(a>0 && b>0))
	{
		printf("sign(%d*%d)= +1",a,b);
	}
	else if((a<0 && b>0)||(a>0 && b<0))
	{
		printf("sign(%d*%d)= -1",a,b);
	}
	else
	{
		printf("sign(%d*%d)= 0",a,b);
	}
	return 0;
}
