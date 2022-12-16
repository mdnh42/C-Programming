#include<stdio.h>
int main()
{
    FILE *inputPattern = fopen("inputPattern.txt", "r");
    FILE *outputPattern = fopen("outputPattern.txt", "w");

    int i, j, rows;

    fscanf(inputPattern,"%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            fprintf(outputPattern," ");
        }
        for(int j =1; j<=rows; j++)
        {
            fprintf(outputPattern,"*");
        }
        fprintf(outputPattern,"\n");
    }

    return 0;
}
