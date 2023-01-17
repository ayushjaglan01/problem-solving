#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n + 2; i++)
    {
        for (int j = 1; j <= n + 2; j++)
        {
            if (i == 1 || i == n + 2 || j == 1 || j == n + 2)
            {
                printf("%d", n);
            }
            if (i > 1 && i < n + 2)
            {
                if (j > 1 && j < n + 2)
                {
                    printf("%d", n - 1);
                }
                if (i == n && j == n)

                {
                    printf("%d", n - 2);
                }
            }
        }
        printf("\n");
    }
    return 0;
}