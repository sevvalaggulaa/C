#include <stdio.h>
#include <stdlib.h>
/* The cost of the first three minutes of a phone call is 0.25TL.
   After 3 minutes, each additional minute costs 0.08TL. */
int main() {
	
	float minutes, cost;
	printf("Enter the duration of your call in minutes: ");
	scanf("%f",&minutes);
	if(minutes<=3)
	{
		cost=0.25;
	}
	else
	{
		cost=0.25+(minutes-3)*0.08;
	}
	printf("cost= %.2fTL",cost);
	
	return 0;
}
