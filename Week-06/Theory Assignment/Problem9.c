#include<stdio.h>
int main()
{
    int  matrix[10][10], transposeMat [100][10];
    printf("Enter your 3x3 Matrix:\n");

    for(int i=0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Your Matrix: \n");
    for(int i=0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            transposeMat[j][i] = matrix[i][j];
        }
    }

    printf("Transpose Matrix: \n");
    for(int i=0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("%d ",transposeMat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
