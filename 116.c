#include <stdio.h>
#include <stdlib.h>

typedef struct karmasikSayi
{
	float reel;
	float sanal;	
}karmasik;

void topla(karmasik n1,karmasik n2)
{
	karmasik temp;
	temp.reel=n1.reel+n2.reel;
	temp.sanal=n2.sanal+n1.sanal;
	printf("\n%.2f + %.2f i",n1.reel,n1.sanal);
	printf("\n%.2f + %.2f i",n2.reel,n2.sanal);
	printf("\ntoplam: %.2f + %.2f i",temp.reel,temp.sanal);
}

int main() {
	
	karmasik k1,k2;
	printf("birinci sayinin reel ve sanal kismini giriniz: \n");
	scanf("%f%f",&k1.reel,&k1.sanal);

	printf("ikinci sayinin reel ve sanal kismini giriniz: \n");
	scanf("%f%f",&k2.reel,&k2.sanal);
	
	topla(k1,k2);
	return 0;
}
