#include<stdio.h>
void main()
{
int a,b,i,s=1;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
if((a%i==0)&&(b%i==0))
{
s=s*i;
}
}
printf(" the gcd is %d",s);
}
