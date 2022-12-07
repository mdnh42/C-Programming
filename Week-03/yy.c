#include <stdio.h>
int main()
{
    int t;
    // long long int n;
    scanf("%d", &t);
 for(int i=1;i<=t;i++)
    {
     int n,count=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         if(n%i==0){
             count++;

         }
     }
      if(count==2)
        { printf("Yes\n");}
     else
        { printf("No\n");}
 }
 return 0;
 }
