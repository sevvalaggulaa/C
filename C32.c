#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c;
	printf("*** Swapping the values of numbers ***\n\n");
	printf("please enter the a value= ");
	scanf("%d",&a);
	printf("please enter the b value= ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a= %d\n",a);
	printf("b= %d",b);
	return 0;
}
