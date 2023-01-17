#include <stdio.h>
#include <math.h>
void armstrongnumbetween(int left, int right)
{
    int num1 = left, num2 = right, x, y;
    printf("Armstrong number between %d and %d \n", left, right);
    for (int i = left; i <= right; i++)
    {
        int sum = 0;
        int s = i;
        // printf(" val of i :%d\n",i);
        int z = i;
        for (int j = 1; j < i; j++)

        {
            // printf("G\t");
            if (s < 10)
            {
               // printf("No of digit in %d: %d\n", i, j);
                x = j;
                     break;
            }
            s /= 10;
        }
            // printf("completed\n");
            for (int k = 1; k <= x; k++)
            { // printf("\nLoop 3");
                int a = z % 10;
              //  printf(" Remainder is: %d\n", a);
                sum = sum + pow(a, x);
              //  printf("Sum isis%d",sum);
                z /= 10;
            }
           // printf("sum is: %d\n", sum);

            if (sum == i)
            { // printf("last");
                printf("\n%d\n", i);
            }
        
    }
}
int main()
{
    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d%d", &num1, &num2);
    armstrongnumbetween(num1, num2);
    return 0;
}