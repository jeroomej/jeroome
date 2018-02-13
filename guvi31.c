#include<stdio.h>
void main()
{
int a,b,c,d,tn,i,sum=0;
printf("enter the first number");
scanf("%d",&a);
printf("enter the total numbers");
scanf("%d",&b);
printf("enter the difference");
scanf("%d",&d);
sum=(b*(2*a+(b-1)*d))/2;
tn=a+(b-1)*d;
printf("sum of the series A.P.");
for(i=a;i<=tn;i=i+d)
if(i!=tn)
 printf("%d + ",i);
 else
 printf("%d = %d ",i, sum);

}
