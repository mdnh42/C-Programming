#include<stdio.h>

int main()
{
    double x, y, total;
    scanf("%lf%lf",&x,&y);
    if(x == 1)
    {
        total = 4.00 * y;
    }
    else if(x == 2)
    {
        total = 4.50 * y;
    }

    else if(x == 3)
    {
        total = 5.00 * y;
    }

    else if(x == 4)
    {
        total = 2.00 * y;
    }

    else if(x == 5)
    {
        total = 1.50 * y;
    }

    printf("Total: R$ %.2lf\n",total);
    return 0;
}
