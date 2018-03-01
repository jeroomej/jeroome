#include <stdio.h>
int main(void) 
{
	char s[50];
	int i,l=0;
	printf("enter the string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			l=l+1;
		}
	}
	printf("\n%d",l);
}
