#include<stdio.h>
void primenumbetween(int left,int right)
{
    int num=0;
    printf("Prime number between %d and %d are: ",left,right);
    for(int i=left;i<=right;i++)
    {  int fact=1;
        for( int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            printf("%d,",i);
        }
    }
}
int main()
{
    int num1,num2;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    primenumbetween(num1,num2);
    return 0;
}