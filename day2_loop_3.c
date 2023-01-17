#include<stdio.h>
main()
{   int n=2;

    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            printf("%c",'A'+i);
        }
        printf("\n");

    }
}

