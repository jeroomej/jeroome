#include <stdio.h>

int main(void) 
{
	int num,f=0,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			f=1;
			break;
			
		}
		temp=temp/2;
	}
	if(f==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
}
