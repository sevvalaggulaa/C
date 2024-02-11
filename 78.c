#include <stdio.h>
#include <stdlib.h>


int main() {
	int *ad1,*ad2;
	int n=10,p=20;
	ad1=&n;
	ad2=&p;
	
	printf("%d\n",*ad1);
	printf("%d\n",ad1);
	
	*ad1=*ad2+2;
	
	printf("%d\n",*ad1);
	printf("%d\n",ad1);
	return 0;
}
