#include<stdio.h>
main ()
{
    int i,j,n,a[100][100],s=0,e;
    printf("ENTER n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||i==4||j==4)
            {
                printf("%d\n",n);
            }
        }
    }
}
