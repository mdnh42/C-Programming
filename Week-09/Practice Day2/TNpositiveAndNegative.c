#include <stdio.h>
void main()
{
    FILE *inputPNNumber = fopen("inputPNNumber.txt", "r");
    FILE *outputPNNumber = fopen("outputPNNumber.txt", "w");
    int t;
    fscanf(inputPNNumber, "%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;
        fscanf(inputPNNumber, "%d", &n);
        if(n>0)
        {
            for(int i=n; i>=-n; i--)
            {
                fprintf(outputPNNumber, "%d",i);
            }
            fprintf(outputPNNumber, "\n");
        }
        else
        {
            for(int i=n; i<=-n; i++)
            {
                fprintf(outputPNNumber, "%d", i);
            }
            fprintf(outputPNNumber, "\n");
        }
    }

    return 0;
}
