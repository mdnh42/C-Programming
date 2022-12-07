#include<stdio.h>
int main()
{
    int a[8] = {5, 4, 5, 7, 2, 1, 4, 2};
    int max = INT_MAX;

    for(int i = 0; i<8; i++)
    {
        if(a[i]>max)
            max =a[i];
    }
    int freq[max+1];

    for(int i= 0l i<=max; i++)
        freq[i]++;

    for(int i = 0; i<=max; i++)
    {
        if(freq[i] !=0)
        {
            for(int j=1; j<= freq[i]; j++)
                printf("%d",i);
        }
    }


    return 0;
}
