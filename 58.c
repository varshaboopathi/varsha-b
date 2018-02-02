#include<stdio.h>
int main()
{
  int i,j;
  scanf("%d\t%d",&i,&j);
  printf("before swapping %d %d",i,j);
  i^=j;
  j^=i;
  i^=j;
  printf("After swapping %d %d",i,j);
}
