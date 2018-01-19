#include<stdio.h>
void main()
{
int a,b=0,c=0,d=0,t;
printf("enter the number");
scanf("%d",&number);
t=a;
while(a!=0)
{
c=a%10;
d=pow(c,3);
b=b+d;
a=a/10;
}
if(b==t)
printf("the given number is armstrong");
else
printf("the given no is not armstrong");
}
