#include <stdio.h>
#include <stdlib.h>

union paylas
{
	int x;
	int y;
	
}kontrol;

int main() {
	
	int *X,*Y;
	
	kontrol.x=100;
	X=&kontrol.x;
	printf("tamsayi(x)=%d bellek adresi %X\n",kontrol.x,X);
	
	kontrol.y=200;
	Y=&kontrol.y;
	printf("tamsayi(y)=%d bellek adresi %X\n",kontrol.y,Y);
	
	return 0;
}
