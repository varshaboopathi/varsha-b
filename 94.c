
#include<stdio.h>
void main()
{
    int a,b,c[4],i;
    scanf("%d%d",&a,&b);
    for(i=0;i<4;i++)
    {
        scanf("%d",&c[i]);
        
    }
    for(i=0;i<4;i++)
    {
        if(b==c[i])
        {
       printf("%d",b);
        }
    }  
}
