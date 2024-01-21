#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,x,result;
	
	printf("**** ax^2+bx+c= ? ****\n\n");
	printf("please enter the values for a,b,c, and x in order=\n");
	scanf("%d%d%d%d",&a,&b,&c,&x);
	
	result=a*x*x+b*x+c;
	printf("the value of ax^2+bx+c = %d",result);
	
	return 0;
}
