#include <stdio.h>
#include <stdlib.h>

void square(int *a, int*sonuc)
{
	*sonuc=*a**a;
}
int main() {
	int a,result;
	printf("Please enter a number to calculate its square: ");
	scanf("%d",&a);
	square(&a,&result);
	printf("result= %d",result);
	
	return 0;
}
