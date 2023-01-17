#include<stdio.h>
main()
{   int n=4;
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("%d",j+i);
        }
        printf("\n");

    }
}
