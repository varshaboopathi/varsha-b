#include<stdio.h>
int hcf(int,int);
int main()
{
int a,b,res;
scanf("%d%d',&a,&b);
res=hcf(a,b);
printf("hcf of %d and %d are%d",a,b,res);
return 0;
}
int hcf(int a,intb)
{
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
}
return a;
}
