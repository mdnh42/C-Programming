//
//Task:5 Write C Program to take a character variable and input and show the corresponding ASCII value of that character.
////


#include<stdio.h>

int main()
{
    char assciValue;
    printf("Enter a Character:");
    scanf("%c",&assciValue);

    printf("The ASSCI Values converting is: %d", assciValue + 31);

    return 0;

}
