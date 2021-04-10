#include <stdio.h>

int main()
{
    float r,pi=3.14;
    printf("Enter radius of a circle=");
    scanf("%2f",&r);
    printf("\n Diameter of Circle=%2f",2*r);
    printf("\n Area of Circle=%2f",pi*r*r);
    printf("\n Circumference of Circle=%f",2*pi*r);
    return 0;
}

