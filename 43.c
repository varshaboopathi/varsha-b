#include<stdio.h>
void main()
{
char a[24],h[567];
int i=0,j=0;
scanf('%s %s",a,h);
while(a[i]!='\0')
i++;
while(h[i]!='\0')
{
a[i]=h[j];
j++;
i++;
}
a[i]='\0';
printf("%s",a);
}
