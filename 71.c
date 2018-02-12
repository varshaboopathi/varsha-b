#include<stdio.h>
#include<string.h>
void main()
{
char a,b;
scanf("%s",&a);
b=strrev(a);
if(a==b)
{
printf("yes palindrome");
}
else
{
printf("no not palindrome");
}
}
