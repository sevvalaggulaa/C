#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[]={10,20,30,40,50};
	int *ptr;
	
	ptr=arr;
	
	printf("%d= %d\n",*ptr,ptr);
	
	printf("%d= %d",*(ptr+1),ptr+1);
	
	
	return 0;
}
