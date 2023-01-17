#include <stdio.h>
#include <math.h>
int factorial(num)
{
    int factoria = 1;
    for (int i = 1; i <= num; i++)
    {
        factoria = factoria * i;
    }
    return factoria;
}
int sumofseries(n)
{

    int j = 0, x;
    float  sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        x = factorial(2 * i - 1);
        sum = sum + (pow(-1, j) * i / x);
        j++;
    }
    return sum;
}
int main()
{  int n;
printf("Enter n: ");
scanf("%d",&n);
int sum =sumofseries(n);
printf("Sum of the series is: %d",sum);
    return 0;
}