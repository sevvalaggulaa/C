#include <stdio.h>
#include <stdlib.h>
#define tam 150
/* Bir s�n�fta bulunan ��rencilerden hangisinin boyunun 150 cm 'ye en 
yak�n oldu�unu hesaplayan bir program yaz�n�z. 
Bu program ��renci numaralar�n� ve santimetre cinsinden boy uzunluklar�n� 
girdi olarak almal�d�r.��renci numaras� 
negatif bir say� girilince kadar veri giri�i devam etmelidir.*/

int main() {
	int no,boy,fark,minboy,minno;
	
	printf("ogrenci no= ");
	scanf("%d",&no);
	
	printf("ogrenci boy= ");
	scanf("%d",&boy);
	
	minno=no;
	fark=abs(tam-boy);
	
	while(no>0)
	{
		printf("ogrenci no= ");
    	scanf("%d",&no);
	
	 	printf("ogrenci boy= ");
		scanf("%d",&boy);
		
		if(abs(tam-boy)<fark)
		{
			fark=abs(boy-tam);
			minno=no;
			minboy=boy;
		}
	
	}
	
	printf("\n%d numarali ogrenci %d cm boyuyla %d cm'e en yak�nd�r.",minno,minboy,tam);
	
	return 0;
}
