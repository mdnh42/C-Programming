#include<stdio.h>
int main()
{
    FILE *inputSum  = fopen("inputSum.txt", "r");
    FILE *outputSum = fopen("outputSum.txt", "w");

    if(inputSum==NULL)
    {
        printf("Not Found");
        return 0;
    }

    int n;
    fscanf(inputSum,"%d",&n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int a;
        fscanf(inputSum,"%d",&a);

        sum+= a%10;

    }
    fprintf(outputSum,"Sum-> %d",sum);
    return 0;
}
