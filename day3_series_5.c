#include<stdio.h>
#include<math.h>
int main()
{ int n,x;
printf("Enter n: ");
scanf("%d",&n);
printf("\nEnter x: ");
scanf("%d",&x);
int fact =1, sum =0;
  int j=0;
for(int i=1;i<=n;i++)
{
  fact=fact*i;
  
  if(i%2==1)
  {
  sum=sum+(pow(-1,j)*pow(x,i)/fact);
  j++;
  }
}
printf("The sum of series is: %d",sum);
    return 0;
}