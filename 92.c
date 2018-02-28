
#include<stdio.h>
void main()
{
int a,b[5],i,c=0;
printf("enter the total no of element");
scanf("%d",&a);
for(i=0;i<5;i++)
{
    scanf("%d",&b[i]);
c=c+b[i];
}
printf("the sum of all numbers is %d",c);
}
