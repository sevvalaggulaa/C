#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  typedef struct 
{
	char isim[10];
	float x_ekseni;
	float y_ekseni;
}nokta;

    void ekranayazdir(nokta p[],int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			printf("%s : (%.2f , %.2f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
		}
    }

int main()
{
    nokta sevv[5]={{"a",3,4},{"b",5,1},{"c",3,6},{"d",2,4},{"e",3,9}};
    
    ekranayazdir(sevv,5);
    
   return 0;
}
