#include <stdio.h>
#include <stdlib.h>
/* A program that takes angles of a triangle from the user, checks 
if they form a triangle,and determines the type of the 
triangle (equilateral, isosceles, or scalene). */


int main() {
	int a,b,c;
	printf("Please enter the angles of the triangle: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		if(a==b && b==c && c==a)
		{
			printf("This is an equilateral triangle.\n");
		}
		else if(a!=b && b!=c && a!=c)
		{
			printf("This is a scalene triangle.");
		}
		else
		{
			printf("This is an isosceles triangle.\n");
		}
	}
	else
	{
		printf("The angles do not form a triangle.\n");
	}
	return 0;
}
