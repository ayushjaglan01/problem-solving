#include<stdio.h>
int catandmouse(int a,int b,int c)
{   
    int x=a-c;
    int y=b-c;
    x=x>0?x:-1*x;
    y=y>0?y:-1*y;
   // printf("%d\t%d\n",x,y);
    if(x>y)
    {
        return 2;
    }
    if(x<y)
    {
        return 1;
    }
    if(x=y)
    {
        return 3;
    }

}
int main()
{
    int a,b,c;
    printf("Enter the position of first cat: ");
    scanf("%d",&a);
    printf("Enter the position of second cat: ");
    scanf("%d",&b);
    printf("Enter the position of mouse: ");
    scanf("%d",&c);
    int ans=catandmouse(a,b,c);
    if(ans==1)
    {
        printf("Cat A");
    }
    if(ans==2)
    {
        printf("Cat A");
    }
    if(ans==3)
    {
        printf("Mouse");
    }
    printf(" will win");
}







