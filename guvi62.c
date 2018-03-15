#include<stdio.h>
#include<string.h>
int main(void)
{
char str[20];
int l,i,flag=0;
printf("enter tne string");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{

    if(str[i]=='1' || str[i]=='0')
    {
    flag=1;
    }

else
{
    flag=0;
    break;
}
}
if(flag==1)
{
    printf("yes");
}
}
