#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullan�c�n�n girdi�i �� say�y� ekrana bast�r
    
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

