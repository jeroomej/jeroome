#include<stdio.h>
void main()
{
char str[50];
int i,l=0;
printf("enter the characters:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{l=l-1;}
}
printf("\n the length of the string is%d",l);
return0
}
