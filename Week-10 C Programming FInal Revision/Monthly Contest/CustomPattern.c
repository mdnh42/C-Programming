#include <stdio.h>

int main()
{
    int i, j, rows;
    char c;

    scanf("%d", &rows);
    scanf(" %c", &c);

    for(i=1; i<=rows; i++)
    {

        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=rows; j++)
        {
            printf("%c",c);
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}
