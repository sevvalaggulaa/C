#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char array[]="bonne";
	char array2[]="soiree";
	char array3[100]="";
	strcpy(array3,array);
	strncpy(array3+3,array2,5);
	printf("%s",array3);
	return 0;
}
