#include<stdio.h>
void main()
{
int a,i,flag=0;
scanf("%d",&a);
for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",a);
}
else
{
printf("%d is not prime",a);
}
}
