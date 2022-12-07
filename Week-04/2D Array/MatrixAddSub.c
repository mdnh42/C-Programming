#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the number of rows and cols: Exmple: 2 2:  ");
    scanf("%d%d",&row, &col);

    int i, j;
    int A[3][4], B[3][4], C[100][100];
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

    // Sum A and B

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    //  printing A + B matrix
    printf("\nA + B= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    // Subtrac A and B

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }


    //  printing A - B matrix
    printf("\nA-B = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



