#include <stdio.h>
#include<string.h>
int main(void)
{
int i,j,n,k;
char a[50],t[50],b[50];
printf("enter the string\n");
scanf("%s",&a);
n=strlen(a);
b[50]=a[50];
while(i<j)
{
    for(i=0;i<n;i++)
    {
        for(j=n;j>1;j--)
        {
            t[k]=a[i];
            a[i]=a[j];
            a[j]=a[i];
        }
    }
}
printf("%s",b);
if(a==b)
{
printf("yes");
}
else
{
    printf("no");
}

return 0;
        }
