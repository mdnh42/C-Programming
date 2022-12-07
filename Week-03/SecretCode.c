#include<stdio.h>
int main()
{
    int i, n,  count=0;
    scanf("%d",&n);

    for(i =1; i<=n; i++)
    {
        int num;
        scanf("%d",&num);

    for(i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            count = 1;
        }
    }
        if(count == 0 && num!=1)
        {
            printf("Yes\n");
        }

      else  if(count == 1 || num==1)
        {
            printf("No\n");
        }


    }

    return 0;
}
