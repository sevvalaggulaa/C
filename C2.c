#include <stdio.h>

int main() {
	
	int i;
	printf("****even numbers****\n");
	for(i=0;i<=10;i+=2)
	{
		printf("%d\n",i);
	}
	printf("\n\n");
	
	printf("****odd numbers****\n");
	for(i=1;i<=10;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}
