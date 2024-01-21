#include <stdio.h>


int main() {
	
	char op;
	float a,b;
	
	printf("please enter an operator= ");
	scanf("%c",&op);
	
	printf("please enter 2 numbers= \n");
	scanf("%f%f",&a,&b);
	
	switch(op)
	{
	   case '+': printf("%.2f + %.2f = %.2f",a,b,a+b);
	   break;
	   
	   case '-': printf("%.2f - %.2f = %.2f",a,b,a-b);
	   break;
	   
	   case '/': printf("%.2f / %.2f = %.2f",a,b,a/b);
	   break;
	   
	   case '*': printf("%.2f * %.2f = %.2f",a,b,a*b);
	   break;
	   
	   default: printf("error");
	   break;
	}
	return 0;
}
