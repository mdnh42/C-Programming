//Pasarger weight
#include<stdio.h>

int main()
{
    int i, sum=0, w, n;
    printf("Enter the number of passengers: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("Enter each person weight: ");
        scanf("%d",&w);
        sum +=w;
    }
    printf("Total sum of weight = %d",sum);
}
