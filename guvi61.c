#include<stdio.h>
void main()
{
int str[20];
int k,i;
printf("enter tne string and no. of characters to print");
scanf("%s%d",&str,&k);
for(i=0;i<k;i++)
{
printf("%c",str[i]);
}
}
