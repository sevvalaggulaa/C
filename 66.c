#include <stdio.h>
#include <stdlib.h>

void ustunual(int x,int y,int *result)
{
	int i;
	*result=1;
	for(i=0;i<y;i++)
	{
		*result=*result*x;
	}
}

int main() {
	int x=4,y=5,sonuc;
	ustunual(x,y,&sonuc);
	printf("%d",sonuc);
	return 0;
}
