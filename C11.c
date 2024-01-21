#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[10];
    int i;
    
    
    for(i=1;i<10;i++)
    {
        can[i]=i*2;
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d\n",can[i]);
    }
        
        
    return 0;
}

