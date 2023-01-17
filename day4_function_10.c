#include <stdio.h>
int raisetopower(int base, int pow)
{ int ans=1;
    for (int i = 1; i <= pow; i++)
    {
        if (pow == 0)
        {
            ans= 1;
            break;
        }
        else
        {
            ans = ans * base;
        }
    }
    return ans;
}
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    int ans=raisetopower(a,b);
    printf("%d raise to power %d is: %d",a,b,ans);
}