#include<stdio.h>
void main()
{
    int a,flag=0,i;
    scanf("%d",&a);
    for(i=2;i<=a/2;++i)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            printf("prime");
        }
        else
        {
            printf("composite");
        }
        
}
