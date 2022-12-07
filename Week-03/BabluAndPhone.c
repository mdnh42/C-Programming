#include<stdio.h>
int main()
{
    int t, i, x, cnt =0;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d%%",&x);
        if(60>=x)
        {
            cnt = 60 -x;
            x += 60 - x;
        }

        if(80>= x && 60 <= x)
        {
            cnt = cnt + (80-x) *2;
            x += 80 - x;
        }
        if(100>= x && x >= 80)
        {
            cnt = cnt + (100-x)*3;
        }
        printf("%d minutes\n",cnt);
        cnt = 0;
    }
    return 0;
}
