int main(void) 

{

	char str[50];

	int i,l=1;

	printf("enter the sentence:");

	scanf("%[^\n]s",str);

	for(i=0;str[i]!='\0';i++)

	{

		if(str[i]=='.')

		{

			l=l+1;

		}

	}

	printf("\nno of lines :%d",l);

}
