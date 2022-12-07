#include<stdio.h>
int main()
{
    int i, n, k;
    scanf("%d%d",&n, &k);

    int input[105];
    int thrown = 0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&input[i]);
        if(input[i]<k)
            thrown++;

    }
    printf("%d",thrown);

    return 0;
}
