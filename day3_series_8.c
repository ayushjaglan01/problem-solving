#include<stdio.h>
int main()
{ int n;
printf("Enter n: ");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++)
{
    sum=sum+(i*(i+1)*(i+2));
}
printf("Sum of series is: %d",sum);
    return 0;
}