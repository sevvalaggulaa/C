#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dizi1[50];
	int dizi2[50];
	int n1,n2,i;
	int *p1,*p2;
	
	printf("1.dizi kac elemali olsun: ");
	scanf("%d",&n1);
	
	for(p1=dizi1;p1<dizi1+n1;p1++)
	{
		printf("eleman %d: ",p1-dizi1);
		scanf("%d",p1);
	}
	
	printf("2.dizi kac elemali olsun: ");
	scanf("%d",&n2);
	
	for(p2=dizi2;p2<dizi2+n2;p2++)
	{
		printf("eleman %d: ",p2-dizi2);
		scanf("%d",p2);
	}
	
	printf("\n\n1.dizi:\n");
	
	for(p1=dizi1;p1<dizi1+n1;p1++)
	{
		printf("%3d",*p1);
	}
	
	printf("\n2.dizi:\n");
	
	for(i=0;i<n2;i++)
	{
		printf("%3d",*(dizi2+i));
	}
	
	for(p1=dizi1+n1,p2=dizi2;p2<dizi2+n2;p1++,p2++)
	{
		*p1=*p2;
	}
	
	printf("\n\n\n");
	
	for(i=0;i<n1+n2;i++)
	{
		printf("%3d",*(dizi1+i));
	}
	
   return 0;
}
