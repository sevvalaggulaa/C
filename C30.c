#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define area(r) PI*r*r

int main() {
	float r;
	printf("*** Calculating The Area Of A Circle ***\n\n");
	printf("please enter the radius = ");
	scanf("%f",&r);
	printf("%.2f",area(r));
	return 0;
}
