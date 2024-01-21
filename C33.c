#include <stdio.h>
#include <stdlib.h>
#define units 40

int main() {
	float squaremeters,cost;
	printf("Please enter the length of the carpet in square meters: ");
	scanf("%f",&squaremeters);
	cost=squaremeters*units+200;
	printf("%.2f",cost);
	
	return 0;
}
