#include<stdio.h>
void main()
{
int l,h,b,a,v;
scanf("%d%d%d",&l,&b,&h);
v=l*b*h;
printf("the volume of cuboid is %d",v);
a=((2*(l*b))+(2*(l*h))+(2*(b*h)));
printf("the area of cuboid is %d",a);
}
