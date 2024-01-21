#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	
	char a[100];
	char b[100];
	int c;
	
	printf("please enter some text= ");
	scanf("%s",a);
	
	printf("please enter the text you want to add= ");
	scanf("%s",b);
	
	printf("how many characters do you want to add? ");
	scanf("%d",&c);
	
	printf("before adding= %s\n",a);
	printf("after adding = %s",strncat(a,b,c));
	
	return 0;
}
