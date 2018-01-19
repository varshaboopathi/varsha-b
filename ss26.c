#include<stdio.h>  
int main() 
{ 
char str[80]; 
int counter,n=0; 
printf("Enter the string containing both digits and a alphabet \n");
scanf("%s", str); 
for(counter=0;str[counter]!='\0';counter++) 
{
 if((str[counter]>='0') && (str[counter]<='9'))
{ 
n+=1; 
} 
} 
printf("No of Digits in the string=%d\n",n);
return 0;
 }

