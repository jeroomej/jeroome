#include<stdio.h>
void main()
{
char str[30];
int i,l=0;
printf("enter the characters");
scanf("%[^\n]d",str);
for(i=0;str[i]!='\0';i++)
{
if(!((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')))
l=l+1;
}
printf("the no. of special characters are :%d",l);
}
