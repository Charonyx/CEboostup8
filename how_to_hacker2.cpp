#include<stdio.h>		//26
int main()
{
	char text[1000];
	int i = 0, j = 0;
	scanf("%[^\n]", text);
	while (text[i] != '\0') 
	{
		if (text[i-1] == ':' && text[i] == '[' && text[i-10] == 'J' && text[i-9] == 'a' && text[i-8] == 'd' && text[i-7] == 'e' && text[i-6] == 'l' && text[i-5] == 'n' && text[i-4] == 'w' && text[i-3] == 'Z' && text[i-2] == 'a')
		{
			j = 1;
		}
		else if(text[i] == ']')
		{
			j=0;
		}
		if(j == 1  && text[i] != '[' /* && text[i] != ']' */)
		{
			printf("%c",text[i]);
		}
		i++;		
	}
	return 0;
}
