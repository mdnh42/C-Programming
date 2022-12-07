#include<stdio.h>
int main()
{
    int A[10][10], B[10][10], result[10][10], r1, r2,c1,c2,i,j,k;

    printf("Enter rows and column for first Matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for Second Matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error! Column of first matrix not equal to row fo second col");
        printf("Enter rows and column for first Matrix: ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for Second Matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    //Taking input A Matrix

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d] [%d]",i,j);
            scanf("%d",&A[i][j]);

        }
    }

 //Taking input B Matrix

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d] [%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }

     //Printing A Matrix
    printf("A = \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    //Printing B Matrix
    printf("A = \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d",B[i][j]);
        }
        printf("\n");
    }



    return 0;
}
