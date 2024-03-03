#include <stdio.h>
#include <stdlib.h>

int main()
{
	char dizi[]={'k','l','b','d','q','r','u','t','y','m','o','p','i','e','w'};
	char dizi2[20];
	char *ptr1,*ptr2;
	int i;
	
	ptr2=dizi2;
	
	for(ptr1=dizi;ptr1<dizi+15;ptr1++)
	{
		*ptr2=*ptr1;
		ptr2++;
	}
	
	printf("orjinal tablo:\n");
	for(ptr1=dizi;ptr1<dizi+15;ptr1++)
	{
		printf("%c ",*ptr1);
	}
	
	printf("\nkopya tablo:\n");
	for(i=0;i<15;i++)
	{
		printf("%c ",*(dizi2+i));
	}
   return 0;
}
