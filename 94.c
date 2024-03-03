#include <stdio.h>
#include <stdlib.h>

int main()
{
   char array[100];
   char eleme;
   char *ptr;
   
   printf("lutfen bir karakter dizisi giriniz= ");
   gets(array);
   
   printf("karakter dizisinden cikarmak istediginiz harf nedir= ");
   scanf(" %c",&eleme);
   
   ptr=array;
   
   while(*ptr)
   {
   	    if(*ptr==eleme)
   	    {
   	    	strcpy(ptr,ptr+1);
		}
		else
		{
			ptr++;
		}
		
   }
   printf("%s",array);
   
   return 0;
}
