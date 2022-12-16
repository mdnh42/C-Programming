#include<stdio.h>
int main()
{
    FILE *inputNumber;
    FILE *outputNumber;
    inputNumber = fopen("inputNumber.txt", "r");
    if(inputNumber==NULL)
    {
        printf("Not Found");
        return 0;
    }
    outputNumber = fopen("outputNumber.txt", "w");

    int n;
    fscanf(inputNumber,"%d",&n);

    for(int i=1; i<=n; i++)
    {
        fprintf(outputNumber,"%d \n",i);
    }

    return 0;
}
