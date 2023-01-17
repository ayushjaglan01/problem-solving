#include<stdio.h>
#include<math.h>
int main()
{ int n,x;
printf("Enter n: ");
scanf("%d",&n);
printf("\nEnter x: ");
scanf("%d",&x);
int fact =1, sum =1;
for(int i=1;i<=n-1;i++)
{
  fact=fact*i;
  sum=sum+(pow(-1,i)*pow(x,i)/fact);
}
printf("The sum of series is: %d",sum);
    return 0;
}