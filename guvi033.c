#include <stdio.h>

int main(void) 
{
	char str[20];
	int i,l=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			l=l+1;
		}
	}
	printf("\nno of white spaces:%d",l);
}
