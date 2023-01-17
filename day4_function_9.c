#include<stdio.h>
int lcm(int num1,int num2)
{ int x;
  for(int i=1;i<=num1*num2;i++)
  {
      if(i%num1==0&&i%num2==0)
      {
        x=i;
        break;
      }
  }
  return x;
}
int main()
{  int num1,num2;
printf("Enter two number: ");
scanf("%d%d",&num1,&num2);
int y=lcm(num1,num2);
printf("LCM is: %d",y);
    return 0;
}