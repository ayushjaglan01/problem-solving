#include<stdio.h>
main()
{   int n;
printf("enter n\n");
scanf("%d",&n);
printf("Your pattern\n");
    for (int i=1;i<=n;i++)
    {  for(int k=i;k<n;k++)
    {
        printf(" ");
    }
        for (int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(int s=2;s<=i;s++)
        {
            printf("%d",s);
        }
        printf("\n");
    }
}
