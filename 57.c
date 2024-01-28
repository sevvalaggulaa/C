#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* A program that calculates the sum of the series given below:
   1^2 + 2^2 + 3^2 + 4^2 + ... + n^2
*/
int sumOfSeries(int n)
{
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum = sum+(pow(i,2));
	}
	return sum;
}

int main() {
	int n;
	printf("please enter the value of n= ");
	scanf("%d",&n);
	printf("The sum of the series is: %d\n",sumOfSeries(n));
	return 0;
}
