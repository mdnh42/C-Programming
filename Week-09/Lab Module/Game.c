#include<stdio.h>
#include<stdbool.h>
int isWin(int a[][4], int n);
void printCell(int a[][4], int n);
//Father of Funciton
int main()
{
    //Decalare a variable how much value and 2D Array for 4 Value !0, 1 2 3
    int n = 3;
    int a[4][4];
    // Set Every postion - 1
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j] = -1;
        }
    }
    // Input from Salma and Rashal
    // check you input and not allow same input more one times.
    bool salma = true;
    bool rashal = false;
    while(true)
    {
        printCell(a, n);
        if(salma == true)
        {
            int r, c;
            SALMAGF:
            printf("SALMA Trun (X), Enter Row and Column: ");
            scanf("%d%d",&r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n ");
                goto SALMAGF;
            }
            a[r][c] = 1;
            salma = false;
            rashal = true;
        }
        else
        {
            int r, c;
            RASHALBF:
            printf("RASHAL Trun (O), Enter Row and Column: ");
            scanf("%d%d",&r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n ");
                goto RASHALBF;
            }
            a[r][c] = 2;
            rashal = false;
            salma = true;
        }
        //Check Who Win?
        if(isWin(a,n)==1)
        {
            printf("Salma Won!\n");
            printCell(a,n);
            break;
        }
        else if(isWin(a,n)==2)
        {
            printf("Rashal Won!\n");
            printCell(a, n);
            break;
        }

    }


    return 0;
}
//print the Cell Function for X, O positoing design
void printCell(int a[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j] == -1) printf(" ");
            if(a[i][j]==1) printf("X");
            if(a[i][j]==2) printf("O");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("_______________________________");
        printf("\n");
    }

}
//Is Win
int isWin(int a[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        if(a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1)
        {
            return a[i][1];
        }
    }
    for(int j=1; j<=n; j++)
    {
        if(a[1][j] == a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
        {
            return a[1][j];
        }
    }
    if(a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != -1)
    {
        return a[1][1];
    }
    if(a[1][3] == a[2][2] && a[3][1] == a[3][1] && a[1][3] != -1)
    {
        return a[1][3];
    }
    return -1;
}
