#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union test
{
	char a[20];
	int x;
	float y;
};

int main()
{
	union test sevv;
	
	sevv.x=2;
	printf("%d\n",sevv.x);
	
	sevv.y=10;
	printf("%.2f\n",sevv.y);
	
	strcpy(sevv.a,"sevval");
	printf("%s",sevv.a);
	
	printf("\ntutulan alan %d byte'tir.\n",sizeof(sevv));
	
    return 0;
}
