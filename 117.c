#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

typedef struct
{
	char ilac_adi[20];
	int adet;
	int fiyat;
}data;

int main()
{
	data veriler[N];
	int i;
	
	for(i=0;i<N;i++)
	{
		fflush(stdin);
		printf("lutfen ilacin adini giriniz: ");
		gets(veriler[i].ilac_adi);
		
		printf("lutfen ilac adedini giriniz: ");
		scanf("%d",&veriler[i].adet);
		
		printf("lutfen ilacin fiyatini giriniz: ");
		scanf("%d",&veriler[i].fiyat);
	}
	
	printf("\n\nILAC ADI\n");
	printf("******************\n");
	
	for(i=0;i<N;i++)
	{
		if(veriler[i].adet<=20)
		{
			printf("%s: ",veriler[i].ilac_adi);
			printf("%d\n",veriler[i].adet);
		}
	}
    return 0;
}
