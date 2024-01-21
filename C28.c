#include <stdio.h>
#include <stdlib.h>

int main() {
    
	int num,units,tens,hundreds,thousands;
	printf("please enter a number= ");
	scanf("%d",&num);
	units=num%10;
	tens=(num/10)%10;
	hundreds=(num/100)%10;
	thousands=(num/1000)%10;
	printf("units place = %d\ntens place = %d\nhundreds place = %d\nthousands place = %d",units,tens,hundreds,thousands);
	
	
	return 0;
}
