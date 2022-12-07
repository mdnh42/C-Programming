#include<stdio.h>
int main()
{

    int N=8, i;
    int arr[8] = {12, 7, 9, 3, 15, 6, 2, 3};
    int sorted_arr[8];


    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    for(int j = 0; j<N; j++)
    {

        int min_index= 0;
        int min = arr[0];
        for(i=0; i<N; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                min_index = i;
            }
        }

        sorted_arr[j] = min;
        arr[min_index] = 9999;
        for(i=0; i<N; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    for(i=0; i<N; i++)
    {
        printf("%d ", sorted_arr[i]);
    }
    printf("\n");


    return 0;
}
