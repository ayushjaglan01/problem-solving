#include<stdio.h>
int factorial(int n)
{   
    if(n==0||n==1)
    {
        return 1;
    }
    else 
    {
        return n*factorial(n-1);
    }
    
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact_1=factorial(num);
    printf("factorial is: %d",fact_1);

}