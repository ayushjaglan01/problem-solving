#include<stdio.h>
#include<math.h>
int palindrome(int n)
{ int y=n,k;
    int num=n,numb=num,x,sum=0;
for(int i=1;i<=n;i++)
{
    n/=10;
    if(n<10)
    {   x=i;
        k=x+1;
         printf("Number have %d digit\n",k);
        break;
    }
}
for(int j=1;j<=x+1;j++)
{
   y=num%10;
   
sum=sum+y*pow(10,k-1);
k--;
num/=10;
   

}
printf("Sum is:%d ",sum);
if(sum==numb)
{
    return 1;
}
else
{
    return -1;
}

    
}
int main()
{ int n;
    printf("Enter number: ");
    scanf("%d",&n);
int ans= palindrome(n);
    if(ans==1)
    {
        printf("\n\tNumber is palindrome");
    }
    else if(ans==-1)
    {
        printf("\n\tNot palindrome");
    }

 }