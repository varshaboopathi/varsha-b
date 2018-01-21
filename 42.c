#include<stdio.h>
int main()
{
char p[56],b[56];
int i;
scanf("%s %s",p,b);
i=0;
while(p[i]==b[i]&&p[i]!='\0')
i++;
if(p[i]>b[i])
{
printf("p>b");
}
elseif(p[i]<b[i])
{
printf("p<b");
}
else
{
printf("p=b");
}
return 0;
}
