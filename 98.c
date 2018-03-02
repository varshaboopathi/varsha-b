#include<stdio.h>
void main()
{
    int a[5],i,b=0;
    printf("enter the no");
    for(i=1;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<5;i++)
    {
        if(a[i]!=i)
        {
            printf("%d",i);
            break;
        }
    }
       
}
