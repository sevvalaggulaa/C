#include <stdio.h>
#include <stdlib.h>

/*Calculate how much water the pool will hold by taking input from the user for length, width, and depth. */

int main() {
	float lenght,width,depth,water;
	printf("please enter the lenght, width and depth values of the pool in order= \n");
	scanf("%f%f%f",&lenght,&width,&depth);
	water=lenght*width*depth;
	printf("You need %.2fL of water to fill the pool.",water);
	return 0;
}
