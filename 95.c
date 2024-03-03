#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cumle[100];
   char *ptr1,*ptr2;
   int kontrol=1;
   
   printf("lutfen bir cumle giriniz= ");
   gets(cumle);
   
   for(ptr2=cumle;*ptr2;ptr2++){
   }
   ptr2--;
   
   for(ptr1=cumle;kontrol==1,ptr1<ptr2;ptr1++,ptr2--)
   {
   	    if(*ptr1 != *ptr2)
   	    {
   	    	kontrol=0;
		}
   }
   
   if(kontrol)
   {
   	    printf("\"%s\" bir palendromdur.",cumle);
   }
   else
   {
   	    printf("\"%s\" bir palendrom degildir.",cumle);
   }
   return 0;
}
