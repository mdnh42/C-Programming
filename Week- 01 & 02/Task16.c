#include<stdio.h>
int main()
{
    int person, i=1, weight, sum =0;
    printf("Enter person: ");
    scanf("%d",&person);

    while(i<=person)
    {
        printf("%d person weight: ", i);
        scanf("%d",&weight);


        sum += weight;
        i++;
    }
    printf("%d Kg weight 7 persons",sum);
}
