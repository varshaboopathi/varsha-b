#include<stdio.h>
void main()
{
int n,n1,x=0;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
x=x*10+n1;
n=n/10;
}
printf("\n%d",x);
}
