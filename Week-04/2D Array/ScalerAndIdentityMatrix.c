#include<stdio.h>
int main()
{
    printf("Enter Row and Colmn: ");
    int row, col;
    scanf("%d%d",&row, &col);

    int A[row][col];

    for(int i=0; i<row; i++)
    {
        for (int j= 0; j<col; j++)
        {
            scanf("%d",&A[i][j]);
        }

    }

    if(row==col)
    {
        int flag = 1, x = A[0][0];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    //Special check for diagonal;
                    if(A[i][j]!=x)
                    {
                        flag = 0;
                    }
                    continue;
                }
                if(A[i][j] != 0)
                {
                    flag =0;
                }
            }
        }
        if(flag == 1)
        {
            printf("Scaler Matrix");
        }
        else{
            printf("Not Scaler");
        }
    }

    else
    {
        printf("Not Scaler\n");
    }




    return 0;
}
