#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	float x_ekseni;
	float y_ekseni;
}nokta;

int main()
{
	nokta sevv;
	sevv.x_ekseni=3.34642;
	sevv.y_ekseni=4.64786;
	
	printf("x ekseni: %.2f\ny ekseni: %.2f",sevv.x_ekseni,sevv.y_ekseni);
	
   return 0;
}
