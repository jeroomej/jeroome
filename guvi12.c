#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,rev=0;
printf("enter the number");
scanf("%d",&n);
a=n;
while(n!=0)
{
rev=(rev*10)+(n%10);
n/=10;
}
if(rev==a)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
