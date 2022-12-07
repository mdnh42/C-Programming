#include<stdio.h>
int main()
{
    int num, count =1, i;

    printf("Enter any positive number: ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i ==0)
        {
            count =0;
        }
    }
    if(count == 1)
        printf("Prime");
    else
        printf("Composite");

    return 0;
}
