#include <stdio.h>
#include <stdlib.h>

// For a rectangular prism with side lengths (a,b) and height (h):
// Base area = a*b
// Sum of lateral areas= h*(2a+2b)
// Total surface area = Base area + Lateral area
// Volume = a*b*h

int main() {
	int a,b,h;
	
	printf("plaese enter the values for side lenghts(a,b) and height(h) of the rectangular prism= \n");
	scanf("%d%d%d",&a,&b,&h);
	
	printf("For a rectangular prism with side lengths (%d,%d) and height (%d):\n\n",a,b,h);
	printf("base area= %d\n",a*b);
	printf("sum of lateral areas= %d\n",h*(2*a+2*b));
	printf("total surface area = %d\n",(2*a*b + h*(2*a+2*b)));
	printf("volume = %d\n",a*b*h);
	
return 0;
}
