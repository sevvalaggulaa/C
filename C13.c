#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[3];
    int i=0;
    
    while(i<3)
    {
        scanf("%d",&numbers[i]);
        i++;
    }
    
    i=0;
    while(i<3)
    {
        printf("%d\n",numbers[i]);
        i++;
    }
    
    return 0;
}

