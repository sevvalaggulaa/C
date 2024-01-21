#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,i=0;
	float number,total=0,average;
	printf("How many numbers do you want to calculate the average of: ");
	scanf("%d",&a);
	
	printf("Please enter %d numbers:\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%f",&number);
		total+=number;
	}
	average=total/a;
	printf("The average of the entered numbers: %.2f",average);
	return 0;	
}
