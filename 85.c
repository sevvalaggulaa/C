#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1,n2,toplam;
	int *p1,*p2;
	
	p1=&n1;
	p2=&n2;
	
	printf("lutfen iki sayi giriniz= \n");
	scanf("%d%d",p1,p2);
	
	
	toplam=*p1 + *p2;
	printf("toplam degeri= %d",toplam);
	return 0;
}
