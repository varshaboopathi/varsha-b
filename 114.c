#include<stdio.h>
void main()
{
   int a[5],i,n,k,sum;
   printf("enter the n and k values");
   scanf("%d%d",&n,&k);
   printf("enter numbers");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
       if(a[i]%2==1)
       {
           sum++;
       }
    if(k==sum)
    {
        printf("%d",a[i]);
    }
   }
   
}
