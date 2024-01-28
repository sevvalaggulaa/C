#include <stdio.h>
#include <stdlib.h>

/* A program that takes divisor and dividend values entered by the user
   and outputs the quotient and remainder. */

void divisionOperation(int divisor, int dividend)
{
    int quotient, remainder;
    
    printf("Quotient= %d\n", dividend / divisor);
    printf("Remainder= %d", dividend % divisor);
}

int main() {
    int divisor, dividend;
    printf("Enter the dividend value: ");
    scanf("%d", &dividend);
    printf("Enter the divisor value: ");
    scanf("%d", &divisor);

    divisionOperation(divisor,dividend);
    return 0;
}
