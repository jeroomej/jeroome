#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is the greater number",a);
else if(b>c)
printf("b is the greater number",b);
else
printf("c is the greater number",c);
}
