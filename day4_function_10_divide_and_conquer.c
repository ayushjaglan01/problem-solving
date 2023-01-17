#include <stdio.h>
int raisetopower(int base, int pow)
{ int ans=1;
    

        if (pow == 0)
        {
            return  1;
            
        }
        else
        { ans=raisetopower(base,pow/2);
        if(pow%2==0)
        {
            return ans*ans;
        }    
            else
            {
                return base*ans*ans;
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