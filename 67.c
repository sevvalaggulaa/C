#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float x;
	do
	{
		printf("please enter a number= ");
		scanf("%f",&x);
		if(x<0)
		{
			printf("please enter a positive number\n");
		}
		if(x<0)continue;
		printf("rood of the number= %f\n",sqrt(x));
	}
	while(x);
	return 0;
}
