#include<stdio.h>
void main()
{
char str[10];
int n,i;
printf("enter the string");
scanf("%s",&str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]>='0' && str[i]<='9')
{
printf("\nyes");
} 
else
{
printf("\nno");
}
}
}
