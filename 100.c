#include<stdio.h>
void main()
{
    int a,n,n1=1;
    scanf("%d",&a);
    while(a!=0)
    {
        n=a%10;
        n1=n1*n;
        a=a/10;
    }
    printf("the product is %d",n1);
}
    
