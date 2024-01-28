#include <stdio.h>
#include <stdlib.h>

/* A program that converts a value entered by the user in seconds
   into the format hours:minutes:seconds. */


void convertToTime(int seconds)
{
    int hours, minutes, sec;
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    sec = (seconds % 3600) % 60;
    printf("%d:%d:%d", hours, minutes, sec);
}

int main() {

    int seconds;
    printf("Please enter the value in seconds: \n");
    scanf("%d", &seconds);
    convertToTime(seconds);
    return 0;
}
