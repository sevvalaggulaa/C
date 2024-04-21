#include <stdio.h>
#include <stdlib.h>

union hesapla
	{	
		int cevre;
		int alan;
	};
	
int main() {
	
	union hesapla bul;
	int yaricap;
	printf("lutfen yaricapi giriniz: ");
	scanf("%d",&yaricap);
	
	printf("*** dairenin alanini ve cevresini hesaplama ***");
	bul.cevre=2*3*yaricap;
	printf("cevre: %d",bul.cevre);
	
	bul.alan=3*yaricap*yaricap;
	printf("\nalan: %d",bul.alan);
	
	return 0;
}
