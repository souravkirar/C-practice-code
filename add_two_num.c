#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,sum,sub,mul;
    printf("Enter 4 num \n");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    sum = num1 + num2 + num3 + num4;
    sub = num1 - num2;
    mul = num1 * num2;

    printf("\nSum = %d + %d + %d + %d = %d \n",num1 , num2 , num3 ,num4, sum);
    
    printf("\nSub= %d - %d  = %d \n",num1 , num2, sub);

    printf("\nmul= %d * %d  = %d \n",num1 , num2, mul);

    
    

}