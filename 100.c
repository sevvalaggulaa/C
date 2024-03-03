#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
	char ad[10];
	char soyad[10];
	int no;
};

int main()
{
	struct ogrenci sevval;
	strcpy(sevval.ad,"sevval");
	strcpy(sevval.soyad,"aggul");
	sevval.no=3072;
	
	printf("%s %s %d\n\n",sevval.ad,sevval.soyad,sevval.no);
	
	struct ogrenci akif={"akif","aggul",872};
	
	printf("%s %s %d",akif.ad,akif.soyad,akif.no);
	
   return 0;
}
