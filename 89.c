#include <stdio.h>
#include <stdlib.h>

float ortalama(int *dizi,int boyut)
{
	int i;
	int toplam=0;
	for(i=0;i<boyut;i++)
	{
		toplam+=dizi[i];
	}
	return (float)toplam/boyut;
}


int main() {
	int n;
	int i;
	float ort;
	printf("kac adet eleman girilecek\n");
	scanf("%d",&n);
	
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("%d. sayiyi giriniz:\n",i+1);
		scanf("%d",&dizi[i]);
	}
	ort=ortalama(dizi,n);
	printf("ortalama %.3f",ort);
	return 0;
}
