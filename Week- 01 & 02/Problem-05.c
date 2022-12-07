//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.

#include<stdio.h>
int main()
{
    int age;
    printf("Write your age: ");
    scanf("%d", &age);

    if(age<18)
    {
        printf("Sorry, you are not eligible to caste your vote \n");
        printf("You woul be ableto caste your vaote after %d year \n", 18-age);
    }
    else
        printf("Congratulation! you are eligible for casting your vote. \n");
}
