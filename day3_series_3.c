#include<stdio.h>
#include<math.h>
 int main()
{
    int i,x,n,fact=1,sum=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for(i=1;i<=n-1;i++)
    {
        fact=fact*i;
        sum=sum+(pow(x,i)/(fact));
    }
    printf(" sum of series is: %d\n",1+sum);
    return 0;
}
