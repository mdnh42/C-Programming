#include<stdio.h>
int main()
{
    int n, i;
    int arr[10];
    scanf("%d", &n);
    for(i = 0; i<n; i++)
        arr[i] = i+1;

    for(i=0; i<n; i++)
        printf("%d th position -> %%d\n",i, arr[i]);

    return 0;
}
