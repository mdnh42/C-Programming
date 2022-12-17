#include<stdio.h>
int main()
{
    int array[100][100],row, col;
    scanf("%d %d", &row, &col);

    for(int i=1; i<=row; i++)
        for(int j=1; j<=col; j++)
            scanf("%d",&array[i][j]);

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(array[i][j] == i && array[i][j] == j)
            {
               array[i][j] += 3;
            }
            else if(array[i][j] == i)
            {
                array[i][j]+= 2;
            }
            else if (array[i][j] == j)
            {
                array[i][j]+= 1;
            }
        }
    }


    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }



    return 0;
}
