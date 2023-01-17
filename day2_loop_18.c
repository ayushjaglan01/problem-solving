#include <stdio.h>
#include <string.h>
int main()
{
    char string[20];

    gets(string);
    int x = strlen(string);
    printf("OUTPUT:\n");
    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < i; k++)
        {
           printf(".");
        }
            printf("%s\n", string + i);
    }
    return 0;
}