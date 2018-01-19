#incclude,stdio.h>
void main()
{
int l,high,i,flag;
scanf("%d%d",&l,&high);
printf("{prime numbers between%d and %d are',l,high);
while(l<high)
{
flag=0;
for(i=2;i<=l/2;++i)
{
if(l%i==0)
{
flag=1;
break;
}
}
if(flag==)
printf("%d",l);
++l;
}
}
