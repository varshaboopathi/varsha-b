#include<stdio.h>
int main()
{
int p[10];
int i;
int greatest;
printf("enter ten numbers");
for(i=0;i<10;i++)
{
scanf("%d",&p[i]);
}
greatest=p[10];
for(i=0;i<10;i++)
{
if(p[i]>greatest)
{
greatest=p[i];
}
}
printf("greatest number is %/d",greatest);
return 0;
}
