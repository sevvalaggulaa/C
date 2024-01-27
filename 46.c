#include <stdio.h>
#include <stdlib.h>

void negativenumber()
{
	int number;
	
	while(1)
	{
	printf("please enter a negative number:\n");
	scanf("%d",&number);
	if(number<0)
	{
		break;
    }
	
    }
	
}
int main() {
  negativenumber();
	return 0;
}
