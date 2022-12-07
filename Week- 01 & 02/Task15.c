#include<stdio.h>
int main()
{
    int person, i, weight, sum =0;
    printf("Enter person: ");
    scanf("%d",&person);

    for(i=1;i<=person; i++)
    {
        printf("Enter each person weight: ");
        scanf("%d",&weight);


        sum = sum + weight;
    }
    printf("%d Kg weight 7 persons",sum);
}
