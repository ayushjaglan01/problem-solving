#include<stdio.h>
int func( int n);
main ()
{
    int n;
    printf("ENTER N");
    scanf("%d",&n);
    func(n);
}

func(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        func(n-5);
    }
    printf("%d\n",n);


}

