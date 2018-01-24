#include<stdio.h>
int main()
{
int i,n;
int a[100];
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("enter number %d",i+1);
scanf("%d",&a[i]);
}
for(i=1;i<n;++i)
{
if(a[0]<a[i])
{
(a[0]=a[i])
printf(largest number=%d",a[0]);
}
else
{
if(a[0]>a[i])
{
(a[0]=a[i])
printf("smallest number=%d",a[0]);
}
}
}
}
