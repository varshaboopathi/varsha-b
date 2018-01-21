#include<stdio.h>
int mystrlen(char *s)
{
    char s[]=”program”;
    int count = 0 ;
    int i;
    for (i = 0; i < s[i]!= 0; i++)
    { 
        count++;
    }
    printf( "The number of characters is %d", count);
    return 0;
    }
