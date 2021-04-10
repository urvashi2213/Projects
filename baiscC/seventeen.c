#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float average,per,total;
    printf("Enter marks of s1=");
    scanf("%d",&s1);
    printf("Enter marks of s2=");
    scanf("%d",&s2);
    printf("Enter marks of s3=");
    scanf("%d",&s3);
    printf("Enter marks of s4=");
    scanf("%d",&s4);
    printf("Enter marks of s5=");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    average=total/5;
    per=(total/500)*100;
    printf("\n Total=%f",total);
    printf("\nAverage=%f",average);
    printf("\nPercentage=%f",per);
    return 0;
}


