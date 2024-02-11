#include <stdio.h>
#include <stdlib.h>

int main() {
	char can[100]="canan";
	char *p;
	
	p=can;
	
	printf("3. karakter %c'dir.",*(p+2));
	
	return 0;
}
