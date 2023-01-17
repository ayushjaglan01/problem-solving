#include<stdio.h>
void perfectnum(int left,int right)
{     printf("Perfect number between %d and %d : ",left ,right);
     for(int i=left+1;i<right;i++)
     { int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
               // printf("%d\t",j);
                sum=sum+j;
            }
        }
       // printf(" sum is: %d\n",sum);
    
        if(sum==i)
        {
            printf(" %d",i);
        
        if(i!=right)
        {
            printf(",");
        }
        }
     }

     }

int main()
{    int num1,num2;
printf("Enter numbers: ");
scanf("%d%d",&num1,&num2);
perfectnum(num1,num2);
    return 0;
}