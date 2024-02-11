#include <stdio.h>
#include <stdlib.h>

int main()
{
   char can[100];
   char *p;

   printf("Lutfen bir karakter dizisi girin\n");
   gets(can);

   for(p=can;*p;p++);
   printf("dizimiz %s: %d kadar karakterden olusmaktadir.",can,p-can);
}
