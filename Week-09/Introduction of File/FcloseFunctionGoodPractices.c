#include<stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("input Not Found");
        return 0;
    }
    FILE * outputFile = fopen("output.txt", "w");
    if(outputFile == NULL)
    {
        printf("output not found\n");
        return 0;
    }
    int n;
    fscanf(inputFile, "%d",&n);
    fprintf(outputFile,"%d\n",n);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
