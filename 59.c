#include<stdio.h>
int main()
{
int i,a[10],b;
printf("enter the value ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<10;i++)
{
if(a[i]>b)
{
b=a[i];
}
}
printf("the greatest among ten no is %d",b);
return 0;
}
