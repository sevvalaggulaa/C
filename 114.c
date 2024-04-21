#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct koordinat
{
	float x,y;
};

int main() {
	
	struct koordinat top;
	float t;
	
	printf("X\tY\n");
	printf("=====\t=====\n");
	
	for(t=0.0;t<10.0;t+=0.1)
	{
		top.x=20-6*cos(t);
		top.y=15+2*sin(t);
		
		printf("%.3f\t%.3f\n",top.x,top.y);
	}
	return 0;
}
