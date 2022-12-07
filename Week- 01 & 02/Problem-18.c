//7. Write a program in C to display the multiplication table vertically from 1 to n.
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d X %d = %d, ",i,n,i*n);
    }
    return 0;
}
