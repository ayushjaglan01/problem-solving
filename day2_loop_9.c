#include <stdio.h>
main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    printf("Your pattern\n");
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int k = i; k < n / 2 + 1; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = n / 2 + 2; i <= n; i++)
    {
        for (int k = 1; k <=  (i - n / 2 - 1); k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n- (2*(i - n / 2)-2); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
