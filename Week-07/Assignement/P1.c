#include <stdio.h>
int series(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", series(n));

    return 0;
}
int series(int n)
{
    int sum=0,counter=0, SeCounter=0;

    for(int i =1; i<=n; i++)
    {
        if(counter==3)
        {
            sum-=i;
            SeCounter++;
            if(SeCounter==3)
            {
                counter=0;
                SeCounter=0;
            }
        }
        else
        {
            sum+=i;
            counter++;
        }
    }
    return sum;
}
