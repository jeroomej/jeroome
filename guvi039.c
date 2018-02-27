#include<stdio.h>
void main()
{
int array[20],n;
int i,max=array[0];
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]>max)
{
max=array[i];
}
printf("the largest number is :%d",max);
}
