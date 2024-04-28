#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci
{
	char ad[10];
	char soyad[20];
	int no;
	int sinif;
};

int main() {
	
	struct ogrenci ogr;
	printf("lutfen ogrenci numarasini giriniz: ");
	scanf("%d",&ogr.no);
	
	if(ogr.no==3072)
	{
		ogr.no=3072;
		strcpy(ogr.ad,"sevval");
		strcpy(ogr.soyad,"aggul");
		ogr.sinif=1;
		
		printf("\n%s %s %d %d.sinif",ogr.ad,ogr.soyad,ogr.no,ogr.sinif);
	}
	else
	{
		printf("\nboyle bir ogrenci bulunamadi.");
	}
	return 0;
}
