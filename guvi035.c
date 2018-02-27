#include <stdio.h>

int main(void) 
{
	char str[50];
	int i,l=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			l=l+1;
		}
	}
	printf("\nthe number of numerals in the sentence is:%d",l);
}
