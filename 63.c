#include <stdio.h>
#include <stdlib.h>

/* Take values for a 2x3x2 matrix from the user and store
them in a 3D array.Print the array with the corresponding
indices to the console. */

int main() {
	int array[2][3][2];
	int i,j,k;
	
	printf("Please enter 12 numbers:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&array[i][j][k]);
			}
		}
	}
	printf("\n\n\nEntered values:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("array[%d][%d][%d]=%d\n",i,j,k,array[i][j][k]);
			}
		}
	}
	return 0;
}
