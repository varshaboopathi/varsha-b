#include<stdio.h>
void main()
{
   int a[5],i,j,temp,n,k,t;
   printf("enter the n and k values");
   scanf("%d%d",&n,&k);
   printf("enter numbers");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
    
	    for(j=i+1;j<n;j++)
	    {
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	    }
	}
	printf("%d",k,a[k-1]);
       
}
