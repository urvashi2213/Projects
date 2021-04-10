#include <stdio.h>

int main()
{
    int a1,a2,lost;
    printf("Enter angle 1=");
    scanf("%d",&a1);
    printf("Enter angle 2=");
    scanf("%d",&a2);
    lost=180-a1-a2;
    if(lost<=180)
    {
        printf("THird Angle is =%d",lost);
        printf("\n It is a triangle.");
    }
    else
    {
        printf("\n No triangle can be formed");
    }
    return 0;
}


