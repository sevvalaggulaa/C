#include <stdio.h>
#include <stdlib.h>

/* A C program that converts a value entered by the user from Fahrenheit
 to Celsius, or from Celsius to Fahrenheit.
   F = (1.8 * C) + 32
   C = (5 / 9) * (F - 32)
*/

float FtoC(float f)
{
	return (0.5555)*(f-32);
}
float CtoF(float c)
{
	return (1.8*c)+32;
}
int main() {
	float f,c,choice;
	printf("1-) Fahrenheit => Celsius\n");
    printf("2-) Celsius => Fahrenheit\n");
    scanf("%f", &choice);
    
    if(choice==1)
    {
    	printf("Please enter the temperature in Fahrenheit: ");
    	scanf("%f",&f);
    	printf("%.2fF = %.2fC",f,FtoC(f));
	}
	else if(choice==2)
    {
    	printf("Please enter the temperature in Celsius: ");
    	scanf("%f",&c);
    	printf("%.2fC = %.2fF",c,CtoF(c));
	}
	else
	{
		printf("error");
	}
	return 0;
}
