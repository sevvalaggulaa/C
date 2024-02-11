#include <stdio.h>
#include <stdlib.h>
#define tam 150
/* Bir sýnýfta bulunan öðrencilerden hangisinin boyunun 150 cm 'ye en 
yakýn olduðunu hesaplayan bir program yazýnýz. 
Bu program öðrenci numaralarýný ve santimetre cinsinden boy uzunluklarýný 
girdi olarak almalýdýr.Öðrenci numarasý 
negatif bir sayý girilince kadar veri giriþi devam etmelidir.*/

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
	
	printf("\n%d numarali ogrenci %d cm boyuyla %d cm'e en yakýndýr.",minno,minboy,tam);
	
	return 0;
}
