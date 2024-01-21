#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main() {
	float a,km;
	printf("please enter how many miles your car has traveled= ");
	scanf("%f",&a);
	km=MIL*a;
	printf("Your car has traveled %.2f kilometers",km);
	return 0;
}
