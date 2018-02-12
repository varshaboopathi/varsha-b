#include<stdio.h>
void main()
{
    int i,r,l;
    scanf("%d%d%d",&i,&r,&l);
    if((i>r)&&(i<l))
    {
        printf("yes in range of r and l");
        
    }
    else
    {
        printf("no not in range of l and r");
    }
}
