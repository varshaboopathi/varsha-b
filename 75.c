#include<stdio.h>
void main()
{
    char a[20],s='*';
    int b=0,c,i;
    scanf("%s",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        b++;
    }
    printf("the length of string is %d",b);
    c=b/2;
    if(b%2==0)
    {
        a[c]=s;
        a[c-1]=s;
        for(i=0;a[i]!='\0';i++)
    printf("%c",a[i]);
    }
    else
    {
        a[c]=s;
        for(i=0;a[i]!='\0';i++)
        printf("%c",a[i]);
    }
}
