#include<stdio.h>
void main()
{
int a,b,i,flag=1;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
i=(a>b)?a:b;
while(1)
{
if((i%a==0)&&(i%b==0))
{
flag=flag*i;
break;
}
++i;
}
printf(" the lcm is %d",flag);
}
