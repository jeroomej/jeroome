#include<stdio.h>
void main()
{
int h1,min1,h2,min2,a,b,c,d,e,f;
printf("enter the start time");
scanf("%d%d",&h1,&min1);
printf("enter the ending time");
scanf("%d%d",&h2,&min2);
a=(h1*60)+min1;
b=(h2*60)+min2;
c=b-a;
d=c/60;
e=c-(d*60);
printf("hours%d:min%d",d,e);
}


