#include <stdio.h>
#include <stdlib.h>

struct yarismaci{
	
	char isim[10];
	char soyad[10];
	float puan[10];
	float performans;
};

float puanHesapla(struct yarismaci pat)
{
	int i;
	float max=0.0,min=6.0,sonuc=0;
	for(i=0;i<10;i++)
	{
		if(pat.puan[i]>max)
		{
			max=pat.puan[i];
		}
		if(pat.puan[i]<min)
		{
			min=pat.puan[i];
		}
		
		sonuc+=pat.puan[i];
	}
	sonuc=(sonuc-min-max)/8;
	return sonuc;
	
}
int main() {
	
	int i;
	struct yarismaci patenci;
	
	printf("yarismacinin adi: ");
	scanf("%s",patenci.isim);
	
	printf("yarismacinin soyadi: ");
	scanf("%s",patenci.soyad);
	
	printf("***hakem puanlari*** \n");
	printf("!!!Hakem puanlari 1 ile 6 arasinda olmalidir!!!\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%f",&patenci.puan[i]);
	}
	
	patenci.performans=puanHesapla(patenci);
	printf("performans puani= %f", patenci.performans);
	
	return 0;
}
