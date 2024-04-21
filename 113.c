#include <stdio.h>
#include <stdlib.h>

typedef struct adresDefteri
{
	char ad[100];
	char soyad[100];
	char telNo[10];
	char adres[200];
	char postaKodu[6];
	
}defter;

int main() {
	
	int N;
	int i;
	char satir;
	
	printf("kac adet sayi tutulacak\n");
	scanf("%d",&N);
	scanf("%c",&satir);
	
	defter iletisim[N];
	
	for(i=0;i<N;i++)
	{
		printf("adi giriniz: ");
		gets(iletisim[i].ad);
		
		printf("soyadi giriniz: ");
		gets(iletisim[i].soyad);
		
		printf("tel noyu giriniz: ");
		gets(iletisim[i].telNo);
		
		printf("adresi giriniz: ");
		gets(iletisim[i].adres);
		
		printf("posta kodunu giriniz: ");
		gets(iletisim[i].postaKodu);	
	}
	
	for(i=0;i<N;i++)
	{
		printf("\n\n%s %s:\n%s\n%s\n%s\n",iletisim[i].ad,iletisim[i].soyad,iletisim[i].telNo,iletisim[i].adres,iletisim[i].postaKodu);
	}
	return 0;
}
