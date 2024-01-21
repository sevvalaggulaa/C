#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullanýcýnýn girdiði üç sayýyý ekrana bastýr
    
    int numbers[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&numbers[i]);
    }
    
    for(i=0;i<3;i++)
    {
        printf("%d\n",numbers[i]);
    }
    
    
    return 0;
}

