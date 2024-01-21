#include <stdio.h>
#include <stdlib.h>
#define DISTANCE 450

int main() {
	float hours,avgspeed;
	printf("Enter how many hours it took from Ankara to Istanbul:  ");
	scanf("%f",&hours);
	
	avgspeed=DISTANCE/hours;
	printf("Your average speed: %.2f",avgspeed);
	
	return 0;
}
