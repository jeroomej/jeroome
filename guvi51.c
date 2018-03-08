#include <stdio.h>

int main(void) 
{
	int n,r,r=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		r=n%10;
		r=(r*10)+r;
		n=n/10;
	}
	n=r;
	while(n!=0)
	{
		r=n%10;
		printf("%d ",r);
		n=n/10;
	}
	return 0;

}
