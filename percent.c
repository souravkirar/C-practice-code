#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,num5;
    float percentage; 
    printf("enter five number find the percentage");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    percentage= (num1+num2+num3+num4+num5)/5;
    printf("percentage of %d,%d,%d,%d,%d => %.2f",num1,num2,num3,num4,num5,percentage );
}
