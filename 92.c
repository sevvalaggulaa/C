#include <stdio.h>
#include <stdlib.h>

int faktoriyel_hesapla(int *num)
{
	int i,sonuc=1;
	for(i=*num;i>=1;i--)
	{
		sonuc*=(*num);
		(*num)--;
	}
	return sonuc;
}

int main()
{
	int n,orjinal_sayi;
	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz= ");
	scanf("%d",&n);
	orjinal_sayi=n;
	printf("%d!= %d",orjinal_sayi,faktoriyel_hesapla(&n));
	
	
    return 0;
}

