#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char karakter= 'C';
	int a=1;
	float b=5.43;
	double c=4357626473;
	
	printf("karakter= %c  adresi %d\n",karakter,&karakter);
	printf("int degeri= %d  adresi %d\n",a,&a);
	printf("float degeri= %.2f  adresi %d\n",b,&b);
	printf("double degeeri= %.2lf  adresi %d\n",c,&c);
	
	return 0;
}
