#include<stdio.h>
int main()
{

    FILE *LeapYearInput = fopen("LeapYearInput.txt", "r");
    FILE *LeapYearOutput = fopen("LeapYearOutput.txt", "a");
    int year;
    fscanf(LeapYearInput,"%d",&year);
    if(year%400 ==0)
    {
        fprintf(LeapYearOutput, "YES\n");
    }
    else if(year % 100 == 0)
    {
        fprintf(LeapYearOutput, "No\n");
    }
    else if(year % 4 ==0)
    {
        fprintf(LeapYearOutput, "YES\n");
    }
    else
    {
        fprintf(LeapYearOutput, "No\n");
    }
    return 0;
}
