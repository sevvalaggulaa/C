#include <stdio.h>
#include <stdlib.h>

int main() {
	int limit,i,satir;
	printf("lutfen bir limit degeri giriniz= ");
	scanf("%d",&limit);
	i=0;
	satir=1;
	while(i<limit)
	{
		if(i%17==0)
		{
			printf("%3d ",i);
			
			if(satir%10==0)
			{
				printf("\n");
			}
			satir++;	
		}
		i++;
	}
	return 0;
}
