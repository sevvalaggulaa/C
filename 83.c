#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char isim[20]="bonjour";
	char *p;
	
	p=isim;
	
	printf("dizinin 4. elemani= %c",*(p+3));
	return 0;
}
