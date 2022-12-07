#include<stdio.h>
int main()
{
    int A[100][100], B[100][100], result[100][100], r1, r2, c1, c2, i, j, k, row, col;

    printf("Enter rows and Columns for the first Matrix: ");
    scanf("%d%d",&r1, &c1);

    printf("Enter rows and Columns for the Secnod Matrix: ");
    scanf("%d%d",&r2, &c2);

    while (c1 != r2)
    {
        printf("Error!! column of first Matrix not equal to row of second matrix \n");

        printf("Enter rows and Columns for the first Matrix: ");
        scanf("%d%d",&r1, &c1);

        printf("Enter rows and Columns for the Secnod Matrix: ");
        scanf("%d%d",&r2, &c2);
    }

    // first Matrix

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            scanf("%d",&A[i][j]);
    }

    // Second Matrix

    for(i=0; i<r2; i++)
    {
        for(j=0; j<col; j++)
            scanf("%d",&B[i][j]);
    }


//    pritning first matrix
    printf("First matrix \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
            printf("%d",A[i][j]);
    }

    //    pritning second matrix
    printf("\nSecond matrix \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d",B[i][j]);
    }

    return 0;
}
