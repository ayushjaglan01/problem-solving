#include<stdio.h>
int main()
{  int n;
printf("Enter n: ");
scanf("%d",&n);
for(int i=1;i<=n/2;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    for(int k=1;k<=n-2*i;k++)
    {
        printf(" ");
    }
     for(int j=i;j>=1;j--)
    {
        printf("%d",j);
    }
    printf("\n");
}

    return 0;
}
