#include <stdio.h>
#include <stdlib.h>

void listele(int n)
{
	if(n==0)
	{
		printf("%d",n);
	}
	else
	{
		printf("%d\n",n);
		listele(n-1);
	}
}

int main() {
	
	int sayi;
	printf("lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	listele(sayi);
	return 0;
}
