#include <stdio.h>

int main() {
	
	int i=1,n,mult;
	
	printf("enter a number= ");
	scanf("%d",&n);
	
	do
	{
	   mult=i*n;
	   i++;
	   printf("%d\n",mult);
	}
	while(i<=10);
    return 0;
}
