#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n%3 == 0 || n%10==5)
    {
        printf("N is beautiful\n");
    }
    else
    {
        printf("Not\n");
    }

    return 0;
}
