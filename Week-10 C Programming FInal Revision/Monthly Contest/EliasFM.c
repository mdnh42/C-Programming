
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int t;
    scanf("%d",&t);
    for(int ii=0;ii<t;ii++)
    {
        int n;
        scanf("%d",&n);

        int arra[1009];
        for(int i=0;i<n;i++)
            {
            scanf("%d",&arra[i]);
            }
        int max=arra[0];
        for(int i=0;i<n;i++)
            {
            if(arra[i]>max)
                max=arra[i];
            }
        int min=arra[0];
        for(int i=0;i<n;i++)
            {
            if(arra[i]<min)
                min=arra[i];
            }
        int maxp=max*max;
        int minp=min*min;
        int maxs=max+max;
        int mins=min+min;
//        if(maxp>minp)
        printf("%d %d %d %d\n",maxp,minp,maxs,mins);
//        else
//        printf("%d %d %d %d\n",minp,maxp,maxs,mins);

  }

    return 0;
}
