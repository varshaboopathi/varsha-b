#include<stdio.h>
int main()
{
int a,reverse=0;
scanf("%d",&a);
while(a!=0)
{
reverse=reverse*10;
reverse=reverse+a%10;
a=a/10;
}
printf("%d",reverse);
return 0;
}
