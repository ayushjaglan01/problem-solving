#include<stdio.h>
int main()
{ int n;
scanf("%d",&n);
int t=n;
while(n<=t)
{
    if(n>=0)
    {
        printf("%d",n);
        n-=5;
        printf(" ");
        if(n<=0)
        {
            break;
        }
    } 
   
}
while(n<=t)
{
   printf("%d",n);
   printf(" ");
   n+=5;
}
    return 0;
}