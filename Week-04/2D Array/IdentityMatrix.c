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
        int flag = 1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    //Special check for diagonal;
                    if(A[i][j]!=1)
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
            printf("Identity Matrix");
        }
        else{
            printf("Not Identity");
        }
    }

    else
    {
        printf("Not Identity\n");
    }




    return 0;
}

