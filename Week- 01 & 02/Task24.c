#include<stdio.h>

int main() {
    int n,m,i;
    scanf("%d %d",&n,&m);
    while(1){
        printf("%d ",n);
        n++;
        if(n>24){
            n=0;
        }
        if(n==m){
            printf("%d ",n);
            break;
        }
    }
    return 0;
}
