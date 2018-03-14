#include<stdio.h>
void main()
{
   int a[5],i,n,k;
   printf("enter the n and k values");
   scanf("%d%d",&n,&k);
   printf("enter numbers");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
       if(k==a[i])
       {
           printf("%d is the k number",a[i]);
       }
       
   }
}
