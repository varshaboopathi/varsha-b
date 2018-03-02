#include<stdio.h>
void main()
{
int a,n,n1=0;
scanf("%d",&a);
while(a!=0)
{
n=a%10;
n1=n1*10+n;
a=a/10;
}
printf("\n%d",n1);
}
