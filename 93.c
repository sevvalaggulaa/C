#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10];
   int *sayi1,*sayi2;
   int n,gecici;
   
   printf("Lutfen dizinin eleman sayisini giriniz: ");
   scanf("%d",&n);
   
   for(sayi1=arr;sayi1<arr+n;sayi1++)
   {
       printf("lutfen eleman giriniz: ");
       scanf("%d",sayi1);
   }
   
   printf("\n\n**dizinin ilk hali**\n");
   
   for(sayi1=arr;sayi1<arr+n;sayi1++)
   {
       printf("%4d",*sayi1);
   }
   
   printf("\n\n");
   
   for(sayi1=arr,sayi2=arr+n-1;sayi1<sayi2;sayi1++,sayi2--)
   {
   	    gecici=*sayi1;
   	    *sayi1=*sayi2;
   	    *sayi2=gecici;
   }
   
   printf("\n\n**dizinin son hali**\n");
   
   for(sayi1=arr;sayi1<arr+n;sayi1++)
   {
       printf("%4d",*sayi1);
   }
   
   return 0;
}
