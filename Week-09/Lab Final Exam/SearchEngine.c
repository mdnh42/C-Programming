#include <stdio.h>
int main()
{
    int arr[1005];
    int size, i, toSearch, found, t, k;
    scanf("%d", &t);
    for(k=0; k<t; k++)
    {
        scanf("%d", &size);

        for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &toSearch);

        found = 0;
        for(i=0; i<size; i++)
        {
            if(arr[i] == toSearch)
            {
                found = 1;
                break;
            }
        }
        if(found == 1)
        {
            printf("Case %d: %d\n",k+1, i + 1);
        }
        else
        {
            printf("Case %d: Not Found\n", k+1);
        }
    }

    return 0;
}
