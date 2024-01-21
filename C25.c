#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float x,result;
	printf("**** finding the value of a function ****\n");
	printf("f(x) = x^3 + 13x^2 + 47x + 5\n\n");
	printf("please enter the value of x= ");
	scanf("%f",&x);
	result=x*x*x+13*x*x+47*x+5;
	printf(">> f(%.3f) = %.3f",x,result);
	
	return 0;
}
