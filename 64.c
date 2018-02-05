#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d",&a,&b);
c=a+b;
printf("the addition value is %d",c);
if(c%2==0)
{
    printf("even");
}
else
{
    printf("odd");
}
}
