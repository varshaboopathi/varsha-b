#include<stdio.h>
void main()
{
int yr;
scanf("%d",&yr);
if(yr%4==0)
{
if(yr%100==0)
{
if(yr%400==0)
printf("%d is not an leap ",yr);
else
printf("%d is not an leap year",yr);
}
else
printf("%d is a leap year",yr);
}
else
printf("%d is not an leap year",yr);
}
