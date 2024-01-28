#include <stdio.h>
#include <stdlib.h>
/* A program that swaps the values stored in the integer variables x and y, 
   which are entered by the user. */
   
   
void swaps(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	
	printf("x value= %d\n",x);
	printf("y value= %d",y);
}
int main() {
	int x,y;
	printf("please enter a x value= ");
	scanf("%d",&x);
	printf("please enter a y value= ");
	scanf("%d",&y);
	swaps(x,y);
	
	return 0;
}
