#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int units,tens,hundreds,number;
	printf("Enter the units place of your number= ");
	scanf("%d",&units);
	printf("Enter the tens place of your number= ");
	scanf("%d",&tens);
	printf("Enter the hundreds place of your number= ");
	scanf("%d",&hundreds);
	number=100*hundreds+10*tens+units;
	printf("your number is= %d",number);
	return 0;
}
