#include<stdio.h>
int main()
{
    int row,col;
    printf("How much row and col: ");
    scanf("%d%d",&row, &col);

    int i, j;
    int A[3][4], B[3][4];
//    scaning A Matrix
    printf("Enter elements for A Matrix \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }

    //  printing simple A matrix
    printf("A = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

//    scaning A Matrix
    printf("Enter elements for B Matrix\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }

    //  printing simple B matrix
    printf("\nB = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}


