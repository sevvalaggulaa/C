#include <stdio.h>
#include <stdlib.h>
#define n 10

int main()
{
    int arr[n];
    int *ptr;
    int i,min,max;
    ptr=arr;
    
    printf("lutfen %d adet sayi giriniz:\n",n);
    for(i=0;i<10;i++)
    {
    	scanf("%d",arr+i);
	}
	
	max=min=*arr;
	
	for(i=1;i<n;i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
		
		if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
	}
	
	printf("\n\nen buyuk deger= %d\n",max);
	printf("en kucuk deger= %d",min);
	
    return 0;
}

