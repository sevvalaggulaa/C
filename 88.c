#include <stdio.h>
#include <stdlib.h>

void fibonacci(int sayi)
{
    int a,b,c,i;
    a=0;
    b=1;
    for(i=0;i<sayi;i++)
    {
        if(i<=1)
        {
            c=i;
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d\n",c);
    }
    
}

int main()
{
    int sayi;
    printf("kac adet fibonacci sayisi uretilsin ");
    scanf("%d",&sayi);
    fibonacci(sayi);

    return 0;
}

