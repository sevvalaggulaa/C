#include <stdio.h>
#include <stdlib.h>

struct karmasiksayi
	{
		float a,b;
	};
	
int main() {
	
	struct karmasiksayi sayi1,sayi2,sonuc;
	char oper;
	
	printf("lutfen yapmak istediginiz islem operatorunu (+,-) giriniz: ");
	scanf("%c",&oper);
	
	printf("birinci karmasik sayi:\n");
	scanf("%f%f",&sayi1.a,&sayi1.b);
	
	printf("ikinci karmasik sayi:\n");
	scanf("%f%f",&sayi2.a,&sayi2.b);
	
	if(oper=='+')
	{
		sonuc.a=sayi1.a+sayi2.a;
		sonuc.b=sayi1.b+sayi2.b;
	}
	else if(oper=='-')
	{
		sonuc.a=sayi1.a-sayi2.a;
		sonuc.b=sayi1.b-sayi2.b;
	}
	else
	{
		printf("\n\n!! lutfen yalnizca + ya da - operatorunu giriniz !!\n\n");
	}
	
	printf("\nsonuc= %.2f",sonuc.a);
	
	if(sonuc.b>=0)
	{
		printf(" + %.2f i",sonuc.b);
	}
	else
	{
		printf(" - (%.2f) i",sonuc.b);
	}
	
	return 0;
}
