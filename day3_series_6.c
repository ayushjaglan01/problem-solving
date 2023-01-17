#include<stdio.h>
#include<math.h>
int main()
{ int n,x;
printf("Enter n: ");
scanf("%d",&n);
printf("\nEnter x: ");
scanf("%d",&x);
int fact =1, sum =1;
int j=0;
for(int i=1;i<=n-1;i++)
{
  fact=fact*i;
  if(i%2==0)
  {
  sum=sum+(pow(-1,j)*pow(x,i)/fact);
  j++;
  }
}
printf("The sum of series is: %d",sum);
    return 0;
}