//Write a program you and your frined buy a watermelon. you bought w kg. you and your friend take even number.

#include<stdio.h>
int main()
{
    int w;
    printf("Please enter the wight of the melon: ");
    scanf("%d", &w);

    if(w%2 == 0 && w!=2)
    {
        printf("Possible");
    }
    else
    {
        printf("Impossible");
    }
}
