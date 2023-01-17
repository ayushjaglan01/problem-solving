#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
void strongnumlessthanN(int n)
{
    int num = n, x;
    int numb = n;
    // for(int i=1;i<numb;i++)
    // {
    //     if(n<10)
    //     {
    //        // printf("\nno of digit:%d",i);
    //         x=i;
    //         break;
    //     }
    //     n/=10;
    // }
printf("Strong number less than %d\n",num);
    for (int i=n;i>0;i--)
    {
        int sum = 0;
        n=i;
        while (n != 0)
        {
            int a = n % 10;
            sum = sum + factorial(a);
       // printf(" sum is: %d\n",sum);
            n /= 10;
        }
        if (sum == i)
        {
            printf(" %d\t", i);
        }
        
    }
}
int main()
{
    int num1;
    printf("Enter the number: ");
    scanf("%d", &num1);
    strongnumlessthanN(num1);

    return 0;
}