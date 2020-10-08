#include<stdio.h>
void main()
{
   int num1, num2, num3, num4, num5, avg ; 
   printf("enter five number find the average\n");
   scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
   avg = num1+num2+num3+num4+num5/5;
   printf("average of %d,%d,%d,%d,%d => %d",num1,num2,num3,num4,num5,avg );

}