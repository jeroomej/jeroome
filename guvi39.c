#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("enter the time in minutes");
scanf("%d",&a);
b=a/60;
printf("hours=%d",b);
c=(a-(b*60));
printf("minutes=%d",c);
}
