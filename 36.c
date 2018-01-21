#include<stdio.h>
int main()
{
int x,y,t;
scanf("%d%d",&x,&y);
printf("before swapping x=%d,y=%d",x,y);
t=x;
x=y;
y=t;
printf(after swapping x=%dy=%d,x,y);
return 0;
}
