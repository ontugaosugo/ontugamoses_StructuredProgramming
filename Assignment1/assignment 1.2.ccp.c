#include <stdio.h>
#include <stdlib.h>

int main()
{
    //surface area of a sphere
    //first know the formula, and declare variables
    double pi=22/7;
    float r;
    float area;
    //ask for the radius
    printf("enter your r: ");
    scanf("%f", &r);
    //calculate the surface area
    area = 4 * pi * r * r;
    //display now the results
    printf("surface area = %2f\n", area);
return 0;
}


