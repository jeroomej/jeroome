#include <stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,flag;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
for(i=a+1; i<b; ++i)
  {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",i);
  }
  return 0;
}
