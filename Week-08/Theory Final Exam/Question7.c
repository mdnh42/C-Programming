#include<stdio.h>
int main()
{
    int row, col, matrix1[100][100], matrix2 [100][100], sum[100][100], i, j;
    scanf("%d %d",&row,&col);

    printf("Enter your 1st Matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter your 2nd Matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

        }
    }
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}
