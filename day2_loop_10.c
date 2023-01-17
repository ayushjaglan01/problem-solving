#include <stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    printf("Your pattern\n");
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= n - (2 * i - 2); j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    for (int i = n / 2 + 2; i <= n; i++)
    {
        for (int k = n - (i - n / 2 + 2); k >= 1; k--)
        {
            printf(" ");
        }
        if (i == n)
        {  
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 3; j >=1 ; j=j-2)
            {
                printf("*");
                 
            }
        }
        printf("\n");
    }

    return 0;
}