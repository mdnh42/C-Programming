#include<stdio.h>
int main()
{
    int i, j;

    i =0;
    while(i<3)
    {
        //printf 5 stars
        j=0;
        while(j<5)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
