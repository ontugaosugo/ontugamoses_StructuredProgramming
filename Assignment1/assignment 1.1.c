#include <stdio.h>
#include <stdlib.h>

int main()
{
    //SIMPLE CALCULATOR
    //first we ask users for 2 numbers,separately
    int num1;
    int num2;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    //now we perform and display the math operations
    printf("addition: %d\n", num1 + num2);
    printf("subtraction; %d\n", num1 - num2);
    printf("multiplication: %d\n", num1 * num2);
    printf("division: %d\n", num1 / num2);
    printf("modulus (remainder): %d\n", num1 % num2);

return 0;
}
