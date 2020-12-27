#include<stdio.h>
main(){
	char text[1000];
	int i=0,j=0;
	scanf("%[^\n]",text);
	while(text[i] != '\0'){
	
		if(text[i] == '['){
			j=1;
		}
		else if(text[i] == ']'){
			j=0;
		}
		if(j == 1 && text[i] != '[' && text[i] != ']'){
			printf("%c",text[i]);
		}
		i++;		
	}
	
}
