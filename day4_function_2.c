#include<stdio.h>
#include<math.h>
float avg(int num1,int num2,int num3,int num4,int num5)
{
     float x=(num1+num2+num3+num4+num5)/5;
     printf("%f",x);
     return x;

}
int medianof5num( int num1,int num2,int num3,int num4,int num5)
{
  return num3;
}
int main()
{  int num1,num2,num3,num4,num5;
    printf("Enter five number: ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    int mean=avg(num1,num2,num3,num4,num5);
    printf("\n\tMean of entered num: %d",mean);
  int median=medianof5num(num1,num2,num3,num4,num5);
  printf("\n\tMedian is: %d",median);

}