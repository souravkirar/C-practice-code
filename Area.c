#include<stdio.h>
void main()
{
    int length,bredth,Area;
    printf("=======================================\n");
    printf("Enter Lenth and Breath to Find the Area");
    printf("\n=======================================\n");
    printf("\nPlease Enter Length : ");
    scanf("%d",&length);
    printf("\nPlease Enter bredth : ");
    scanf("%d",&bredth);
    Area= length*bredth;
    printf("Area of %d * %d =  %d ",length,bredth,Area);
}
