#include <stdio.h>
#include <stdlib.h>

void degistir(int *ad1, int *ad2)
{
	int c;
	c=*ad1;
	*ad1=*ad2;
	*ad2=c;	
	
}

int main() {
	
	int a=10,b=20;
	printf("%d %d\n",a,b);
	degistir(&a,&b);
	printf("%d %d",a,b);
	
	return 0;
}
