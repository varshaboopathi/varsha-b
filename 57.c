#include<stdio.h>
int swap(int,int);
int main()
{
int a=10;
int b=20;
printf("the value before swapping is %d%d",a,b); 
swap(a,b);
return 1;
}
int swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("the values ahter swapping is %d%d",x,y);
}
