#include<stdio.h>
void main()
{
int a=0;b=1,e,num,count=0;
scanf("%d",&num);
printf("first %d FIBONACCI numbers are   \n",num);
printf("%d",a);
printf("%d",b);
count=2;
while(count<num)
{
e=a+b;
count++;
printf("%d",e);
a=b;
b=e;
}
}
