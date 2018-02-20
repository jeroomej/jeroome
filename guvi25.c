#include<stdio.h>
void main()
{
int n,i,j,temp;
int array[10];
float median;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
for(j=i+n;j<n;j++)
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
if(n%2==0)
{
median=(array[n/2]+array[(n-1)/2])/2;
}
else
{
median=array[n/2];
}
printf("%f",median);
}
