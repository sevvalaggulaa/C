#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
/* A program that calculates the area and circumference 
of a circle based on the radius value entered by the user */

void circle(float r)
{
	float area, circumference;
	area=PI*r*r;
	circumference=2*PI*r;
	printf("area= %.2f\n",area);
	printf("circumference= %.2f\n",circumference);
}

int main() {
	
	float r;
	printf("**** the area and circumference of the circle ****\n\n");
	printf("please enter a radius= ");
	scanf("%f",&r);
	circle(r);
	
	return 0;
}
