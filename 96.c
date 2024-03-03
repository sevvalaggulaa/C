#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   int *ptr;
   int i;
   
   printf("*****dizi*****\n");
   for(ptr=dizi;ptr<=dizi+15;ptr++)
   {
   	    printf("%4d",*ptr);
   }
   
   printf("\n\n*****dizideki cift sayilar*****\n");
   for(ptr=dizi;ptr<=dizi+15;ptr+=2)
   {
   	printf("%4d",*ptr);
   }
   
   printf("\n\n*****dizideki tek sayilar*****\n");
   for(ptr=dizi+1;ptr<=dizi+15;ptr+=2)
   {
   	printf("%4d",*ptr);
   }
   return 0;
}
