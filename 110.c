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
	
	struct yarismaci patenci[100];
	int n,birinci=0;
	int i,j;
	char satir;
	float max=0.0;
	printf("lutfen yarismaci sayisini giriniz: ");
	scanf("%d",&n);
	scanf("%c",&satir);
	
	for(j=0;j<n;j++)
	{
		printf("\nad ");
		gets(patenci[j].isim);
		
		printf("soyad: ");
		gets(patenci[j].soyad);
		
		printf("hakem puani: \n");
		
		for(i=0;i<10;i++)
		{
			scanf("%f",&patenci[j].puan[i]);
		}
		scanf("%c",&satir);
	
		patenci[j].performans=puanHesapla(patenci[j]);
		printf("puan= %f",patenci[j].performans);
		
		if(patenci[j].performans>max)
		{
			max=patenci[j].performans;
			birinci=j;
		}
	}

	printf("\n\n\nbirinci %f puanla %s %s",max,patenci[birinci].isim,patenci[birinci].soyad);
	
	
	return 0;
}
