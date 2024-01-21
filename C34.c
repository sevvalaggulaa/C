#include <stdio.h>
#include <stdlib.h>

int main() {
	float squaremeters,cost;
	char code;
	printf("CARPET TYPES\nTweety(T) Bugs(B) Spiderman(S)\n\n");
	printf("Please enter the code of the carpet you want to purchase: ");
	scanf("%c",&code);
	printf("Please enter the square meters of carpet you want to purchase:");
	scanf("%f",&squaremeters);
	
	if(code=='T')
	{
		cost=squaremeters*18;
	}
	else if(code=='B')
	{
		cost=squaremeters*17;
	}
	else if(code=='S')
	{
		cost=squaremeters*19;
	}
	else
	{
		printf("Invalid code entry\n");
	}
	printf("The amount you need to pay = $%.2f",cost);
	return 0;
}
