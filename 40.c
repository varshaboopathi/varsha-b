#include<stdio.h>
void main()
{
int a=0;b=1,c,n,count=0;
scanf("%d",&n);
printf("first %d FIBONACCI numbers are   \n",n);
printf("%d",a);
printf("%d",b);
count=2;
while(count<n)
{
c=a+b;
count++;
printf("%d",c);
a=b;
b=c;
}
}
