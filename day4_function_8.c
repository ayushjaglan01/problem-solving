#include<stdio.h>
#include<math.h>
void gcd(int num1,int num2)
{
    int x;

    
   for(int i=1;i<=num1&&i<=num2;i++)
{
    if(num1%i==0&&num2%i==0)
    {
      x=i;
        
    }
}
    printf("\n Greatest Integer Factor of %d and %d is: %d",num1,num2,x);


}
int main()
{ int num1,num2;
    printf("Enter two numbers: ");
scanf("%d%d",&num1,&num2);
gcd(num1,num2);

}