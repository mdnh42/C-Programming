#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        long long count = 0;
        for(int i = 0; i<n-1; i++)
        {
            if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0'))
            ++count;
        }
        printf("%lld\n",count);
    }


    return 0;
}
