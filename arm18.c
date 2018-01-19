#include<stdio.h>
void main()
{
int low,high,i,temp1,temp2,reaminder,a=0,result=0;
scanf("%d%d",&low,&high);
printf("armstrong numbersbetween %d and %d are",low,high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1 !=0)
{
temp1 /=10;
++a;
}
while(temp2 !=0)
{
remainder=temp2%10;
result+=pow(remainder,a);
temp2/10;
}
if(result==i)
{
printf("%d",i);
}
a=0;result=0;
}
}
