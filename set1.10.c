#include<stdio.h>
void main()
{
long long a;
int count=0;
printf("enetr an integer");
scanf("%lld",&a);
while(a!=0)
[
a/=10;
++count;
]
printf('number of digits %d',count);
}
