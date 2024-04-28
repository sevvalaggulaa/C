#include <stdio.h>
#include <stdlib.h>

struct ogrenciTip
{
	int no;
	char cevap[10];
};

struct sonucTip
{
	int no;
	int ogrnot;
};

int main() {
	
	struct ogrenciTip ogr[30];
	struct sonucTip sonuc[30];
	char anahtar[10],satir;
	int dogru,yanlis;
	int i,j;
	
	printf("lutfen cevap anahtarini giriniz\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",&anahtar[i]);
	}
	
	printf("ogrenci bilgilerini giriniz \n");
	for(i=0;i<30;i++)
	{
		printf("ogrenci no: ");
		scanf("%d",&ogr[i].no);
		
		dogru=yanlis=0;
		scanf("%c",&satir);
		printf("cevaplari:\n");
		for(j=0;j<10;j++)
		{
			scanf("%s",&ogr[i].cevap[j]);
			if(anahtar[i]==ogr[i].cevap[j])
			{
				dogru++;
			}
			else if(ogr[i].cevap[j]!= ' ')
			{
				yanlis++;
			}
		}
		
		sonuc[i].no=ogr[i].no;
		printf("dogru: %d  yanlis: %d\n",dogru,yanlis);
		sonuc[i].ogrnot=dogru-(yanlis/4);
	}
	
	for(j=0;j<30;j++)
	{
		printf("ogrenci no: %d  not: %d\n",sonuc[j].no,sonuc[j].ogrnot);
	}
	return 0;
}
