#include<stdio.h>
int main()
{
int n,n2,n3;
scanf("%d %d",&n,&n2);
n3=(n>n2)?n:n2;
while(1)
{
if(n3%n==0&&n3%n2==0)
{
printf("the lcm is %d",n,n2,n3);
break;
}
++n3;
}
return 0;
}
