#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1,n2,k;
	int *p1,*p2;
	
	p1=&n1;
	p2=&n2;
	
	printf("lutfen iki adet sayi giriniz= \n");
	scanf("%d%d",p1,p2);
	
	printf("%d %d\n",*p1,*p2);
	
	k=p1;
	p1=p2;
	p2=k;
	
	printf("%d %d",*p1,*p2);
	
	return 0;
}
