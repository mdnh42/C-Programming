#include <stdio.h>

int main()
{  int t;
   scanf("%d",&t);
   for(int i=1;i<=t;i++)
    {
        int n,cnt=0;
        scanf("%d",&n);
   for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           cnt++;
       }
    }
        if(cnt==2)
            printf("Yes\n");
        else
        {
            printf("No\n");
        }
   }
}

