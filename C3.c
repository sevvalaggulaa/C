#include <stdio.h>

int main() {
	
	int i=1,n,multiplication;
	
	printf("please enter a number= ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		multiplication=i*n;
		i++;
		printf("%d\n",multiplication);
	}
	

    return 0;
}
