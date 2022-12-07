#include<stdio.h>
int mygcd(a, b)
{

    for(int i = a; a>=1; i--)
    {
        if(a%i == 0 && b%i == 0)
        {
            return i;
        }
    }


}

int myLcm (a, b)
{
    int lcm = (a*b)/mygcd();
    return lcm;
}

int main()
{
    int a, b, ans;
    scanf("%d %d",&a, &b);
    ans = mygcd(a,b);
    printf("The GCD is %d", ans);
    int lemis = myLcm();
    printf("The lcm is %d",lemis);
    return 0;
}
