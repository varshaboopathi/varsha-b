#include<stdio.h>
int main()
{
int c=0,a;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
c++;
printf(" count the number%d",c);
}
}
