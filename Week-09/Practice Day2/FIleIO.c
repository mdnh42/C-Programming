#include<stdio.h>
int main()
{
    FILE *input;
    input = fopen("input.txt", "r");

    FILE *output;
    output = fopen("output.txt", "w");
    while(1)
    {
        char ch = fgetc(input);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch, output);

    }
    return 0;
}
