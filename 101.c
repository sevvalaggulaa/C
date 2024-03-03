#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	
struct ogrenci_bilgi
{
	int no;
	char ad[10];
	char soyad[10];
	int yas;
};

struct ogrenci_bilgi ogrenci_1,ogrenci_2;

ogrenci_1.no=3072;
ogrenci_1.yas=20;
strcpy(ogrenci_1.ad,"sevval");
strcpy(ogrenci_1.soyad,"aggul");

ogrenci_2=ogrenci_1;

printf("ad:%s\nsoyad:%s\nyas:%d\nno:%d",ogrenci_1.ad,ogrenci_1.soyad,ogrenci_1.yas,ogrenci_1.no);

   return 0;
}
