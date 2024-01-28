#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* A C program that calculates the area of an equilateral triangle
   with different side lengths.
   u = (a + b + c) / 2
   area^2 = u * (u - a) * (u - b) * (u - c)
*/

float calculateArea(float a, float b,float c)
{
	float u,area;
	u=(a+b+c)/2;
    area=sqrt(u*(u-a)*(u-b)*(u-c));
    return area;
	
}
int main() {
	float a,b,c;
	printf("Please enter the side lengths of the equilateral triangle for which you want to calculate the area: \n");
	scanf("%f%f%f",&a,&b,&c);
	printf("The area of the triangle is: %.2f",calculateArea(a,b,c));
	return 0;
}
