#include <stdio.h>
#include <stdlib.h>

int main() {
	int dizi[3][4]={{2,3,5,8},{8,3,7,9},{8,5,3,5}};
	int dizi2[3][4]={{6,4,3,7},{2,6,4,2},{2,3,3,2}};
	int toplam[3][4];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			toplam[i][j]= dizi[i][j]+dizi2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",toplam[i][j]);
		}
		printf("\n");
	}
	return 0;
}
