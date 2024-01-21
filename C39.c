#include <stdio.h>
#include <stdlib.h>


int main() {
	char a;
	printf("Please enter an uppercase character: ");
	scanf("%c",&a);
	if((a>='A')&&(a<='Z'))
	{
		printf("Your lowercase letter: %c",tolower(a));
	}
	else
	{
		printf("Error");
	}
	return 0;
}

