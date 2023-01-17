#include <stdio.h>
int main()
{
    int d, m, y, mc;
    printf("Enter the date in the format dd mm yy: ");
    scanf("%d%d%d", &d, &m, &y);
    switch (m)
    {
    case 1:
        mc = 1;

        break;
    case 2:
        mc = 4;

        break;
    case 3:
        mc = 4;

        break;
    case 4:
        mc = 0;

        break;
    case 5:
        mc = 2;

        break;
    case 6:
        mc = 5;

        break;
    case 7:
        mc = 0;

        break;
    case 8:
        mc = 3;

        break;
    case 9:
        mc = 6;

        break;
    case 10:
        mc = 1;

        break;
    case 11:
        mc = 4;

        break;
    case 12:
        mc = 6;

        break;

    default: printf("month should be (1-12)\n");
        break;
    }
    int weekday = (d + y % 100 + y / 4 + mc)%7;
    
    switch (weekday)
    {
    case 0:
        printf("Saturday");
        break;
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thrusday");
        break;
    case 6:
        printf("Friday");
        break;
    
    default:  printf("Something went wrong!!");
        break;
    }
    return 0;
}