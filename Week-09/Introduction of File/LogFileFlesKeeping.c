//History

#include<stdio.h>
int main()
{
    FILE *logFile = fopen("log.txt", "w");
    fprintf(logFile, "Hello at 12.00 AM");
    return 0;
}
