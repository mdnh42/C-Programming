#include<stdio.h>
int find_prime(int n,int ar[]);
double avg(int n,int ar[]);
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[50];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Prime numbers: %d\n",find_prime(n,ar));
    printf("Average of all even integers: %.2f",avg(n,ar));
}
int find_prime(int n,int ar[])
{
    int *ptr;
    ptr=&ar[1];
    int i,count_prime=0,c=0;
    for (i = 1; i <= n; i++)
    {
        if (*ptr % i == 0)
        {
            c++;
        }
        if (c == 2)
        {
            count_prime++;
        }
        ptr++;
    }
    return count_prime;
}
double avg(int n,int ar[])
{
    int *ptr,i;
    ptr=&ar[1];
    int sum=0,c=0;
    float avg=0;
    for(i=1; i<=n; i++)
    {
        if(*ptr % 2 == 0)
        {
            sum=sum+*ptr;
            c++;
        }
        ptr++;
    }
    avg=sum/c;
    return avg;
}
