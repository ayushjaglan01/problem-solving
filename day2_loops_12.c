#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", j);
        }
        for (int k = 2 * i - 3; k >= 1; k--)
        {
            if (i == 1)
            {
                continue;
            }
            else
            {
            printf(" ");
            }
        }
        for (int j = n -i+ 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}