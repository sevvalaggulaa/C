#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int arr[100];
	int n;
	int *p;
	
	p=arr;
	
	int i;
	printf("dizi kac elemanli olsun\n");
	scanf("%d",&n);
	
	printf("dizi elemanlarýný giriniz\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	
	p=arr;
	
	printf("degerler\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*p);
		p++;
	}
	
	
	return 0;
}
