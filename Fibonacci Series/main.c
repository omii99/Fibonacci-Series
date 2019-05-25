#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,i,n1=0,n2=1,nxtterm; //x=number
   printf("Enter the number of terms:");
   scanf("%d",&x);
   printf("Fibonacci Series");
   for(i=1;i<=x;i++)
   {
       printf("%d, ",n1);
       nxtterm=n1+n2;
       n1=n2;
       n2=nxtterm;
   }

    return 0;
}
