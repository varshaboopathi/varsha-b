#include<stdio.h>
int main()
{
int x,y,s;
scanf("%d%d",&x,&y);
printf("before swapping x=%d,y=%d",x,y);
s=x;
x=y;
y=s;
printf(after swapping x=%dy=%d,x,y);
return 0;
}
