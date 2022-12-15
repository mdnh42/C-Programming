/*
1. Array[3][4] = -1
2. Player1(X) and Player2(O)
2. Player1 r, c = 1 = X and Player2 r, c = 2 = O


*/

#include<stdio.h>
#include<stdbool.h>
// Who wiwn
int is_win(int a[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        if(a[i][1]=a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1)
            return a[i][1];
    }
    for(int j=1; j<=n; j++)
    {
        if(a[1][j]=a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
            return a[1][j];
    }

    if(a[1][1] == a[2][2] && a[2][2]==a[3][3] &&a[1][1] != -1)
        return a[1][1];

    if(a[1][3] == a[2][2] && a[2][2]==a[3][1] && a[1][3] != -1)
        return a[1][3];
}
// Tic-Tac Box Printng Function
void printCell(int a[4][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j] == -1) printf(" ");
            if(a[i][j] == 1) printf("X");
            if(a[i][j] == 2) printf("O");
            if(j<n) printf("\t|\t");
        }
        if(i<n) printf("\n______________________________________\n");
        printf("\n\n");

    }

}
void printWin(int a[4][4], int n, int who)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j] == who)
            {
                if(a[i][j] == 1) printf("X");
                else printf("O");
            }
            else
            {
                printf(" ");
            }
            if(j<n) printf("\t|\t");
        }
        if(i<n) printf("\n______________________________________\n");
        printf("\n\n");

    }

}
int main()
{
    int n= 3;
    int a[4][4];
    // Set Every Postion -1
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j] = -1;
        }
    }
    bool player1 = true, player2= false;
    while(true)
    {
        printCell(a, n);
        if(player1)
        {
            int r, c;
            Flag:
            printf("Player 1 Trun (X), Enter Row and Column: ");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
            Flag2:
            printf("Player 2 Trun (X), Enter Row and Column: ");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            a[r][c] = 2;
            player2 = false;
            player1=true;
        }
//        check who win
        if(is_win(a, n)==1)
        {
            printf("Plalyer 1 Won!\n");
            printWin(a,n, 1);
            break;
        }
        else if(is_win(a, n) == 2)
        {
            printf("Player 2 Won!\n");
            printWin(a,n, 2);
            break;
        }
    }
    return 0;
}
