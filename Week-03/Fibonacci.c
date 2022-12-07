#include<stdio.h>
int main()
{
    int n1 =0, n2,n3, i, number;
    printf("Enter the number of Elements");

    scanf("%d",&number);

    printf("\n %d %d ", n1);

    for(i=1; i<number; ++i)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
