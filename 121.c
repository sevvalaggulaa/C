#include <stdio.h>
#include <stdlib.h>

int topla(int sayi)
{

	if(sayi==1)
	{
		return 1;
	}
	else
	{
		return sayi+topla(sayi-1);
	}
	
}
int main() {
	
	int n;
	printf("lutfen bir pozitif sayi giriniz: ");
	scanf("%d",&n);
	
	int toplam=topla(n);
	printf("toplam: %d\n",toplam);
	
	return 0;
}
