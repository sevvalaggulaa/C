#include <stdio.h>
#include <stdlib.h>
#define tavhiz 0.038
#define kushiz 0.012

/* Bir �iftlikte tav�anlar�n say�s� 1042 iken, ku�lar�n say�s� 2272'dir.
Bir y�lda tav�anlar %3,8 oran�nda �o�al�rken, ku�lar %1,2 oran�nda
�o�almaktad�r.Tav�anlar�n ku�lar�n say�s�n� ka� y�l sonra ge�ece�ini 
bulan bir C program� yaz�n�z*/

int main() {
	float tavsan=1042,kus=2272;
	int yil=0;
	
	while(tavsan<kus)
	{
		tavsan=tavsan+tavsan*tavhiz;
		kus=kus+kus*kushiz;
		yil++;
		printf("%d.yil:  tavsan= %d  kus= %d\n",yil,(int)tavsan,(int)kus);
	}
	printf("%d. yilda tavsanlarin sayisi kuslari gecer.",yil);
	return 0;
}
