#include<stdio.h>
void main()
{
    int b;
    printf("enter the no");
    scanf("%d",&b);
    if(b%2==0)
    {
        printf("the nearest even no is %d\n",b-2);
        
    }
    else
    {
        printf("the nearest even no is %d\n",b-1);
    }
}
