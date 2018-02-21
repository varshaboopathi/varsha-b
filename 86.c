#include<stdio.h>
void main()
{
    char a[5];
    int i,j,flag=1;
    scanf("%s",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=1;a[j]='\0';j++)
        {
           if( a[i]==a[j])
           {
            flag=1;
           }
           else
           {
               flag=0;
           }
        }
        
    }
if(flag==1)
{
    printf("no");
    
}
else
{
    printf("yes");
}
}
