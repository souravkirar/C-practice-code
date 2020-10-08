#include<stdio.h>
void main()
{
  int num1,sq,cube;
  printf("enter num  find the square \n");
  scanf("%d",&num1); 
  sq = num1 * num1;
  cube = sq*num1;
  printf("Square of %d is %d",num1,sq);
  
  printf("\nCube of %d is %d",num1,cube);
}