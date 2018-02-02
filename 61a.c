#include<stdio.h>
void main()
{
char s[20];
int a,i;
printf("enter the character and limit");
scanf("%s%d",&s,&a);
printf("the character is %s",s);
for(i=0;i<a;i++)
{
printf("%s",s[i]);
}
}
