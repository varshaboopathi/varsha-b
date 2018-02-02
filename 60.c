#include<stdio.h>
int main()
{
int a,b,sum=0,i,num=1;
scanf("%d",&a);
if(a!=0)
{
printf("%d%d ",sum,num);
for(i=0;i<a;++i)
{
b=sum+num;
sum=num;
num=b;
printf("%d",num);
}
return 0;
}
}
