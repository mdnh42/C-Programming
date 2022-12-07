
#include <stdio.h>

int main()

{

    int n;

    scanf("%d",&n);

    int sum=0,cnt=0,cnt2=0;

    for(int i=1; i<=n; i++)

    {

        if(cnt==3)

        {

            sum-=i;

            cnt2++;

            if(cnt2==3)

            {

                cnt=0;

                cnt2=0;

            }

        }

        else

        {

            sum+=i;

            cnt++;

        }

    }

    printf("%d",sum);

}
