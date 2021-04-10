#include <stdio.h>

int main() 
{
    int l,b;
    printf("Enter length=");
    scanf("%d",&l);
    printf("\n");
    printf("Enter breadth= ");
    scanf("%d",&b);
    printf("\n");
    printf("Perimeter of Rectangle=%d \n",2*(l+b));
    printf("Area of Rectangle=%d \n",l*b);
    

    return 0;
}

