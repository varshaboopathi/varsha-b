#include<stdio.h>
void main()
{
   int a,n,n1;
   scanf("%d",&a);
   while(a!=0)
   {
       n=a%10;
       printf("%d",&n);
       a=a/10;
   }
   
}
