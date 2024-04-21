#include <stdio.h>
#include <stdlib.h>

struct kontrol1{
	int x;
	char y;
	long z;
};

union kontrol2{
	int a;
	char b;
	long c;
};
int main() {
	
	printf("char:%d\n",sizeof(char));
	printf("int:%d\n",sizeof(int));
	printf("float:%d\n",sizeof(float));
	printf("double:%d\n",sizeof(double));
	
	printf("******************\n");
	printf("struct = %d byte\n",sizeof(struct kontrol1));
	printf("union = %d byte\n",sizeof(union kontrol2));
	
	return 0;
}
