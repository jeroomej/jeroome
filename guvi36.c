#include <stdio.h>
#include<conio.h>
void main() 
{
    int n,a[10],temp=0,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
       for(t=i+1;t<n;t++)
       {
           if(a[j]>a[t])
           {
               temp=a[j];
               a[j]=a[t];
               a[t]=temp;
           }
       }
    }
   
     if(n%2==0)
     {
         printf("%d\n",(a[n/2]+a[(n/2)-1])/2);
     }
     else
     {
         printf("%d\n",a[(n-1)/2]);
     }
	return 0;
}
