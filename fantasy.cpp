#include<stdio.h>
main(){
	int i=0,j=0;
	char text[100];
	scanf("%[A-Za-z]",text);
	while(text[i] != '\0'){
		if(text[i]>='A' && text[i]<='Z'){
			text[i] += (2*(78-text[i])-1);
		}
		else if(text[i]>='a' && text[i]<='z'){
			text[i] += (2*(110-text[i])-1);
		}
		i++;
	}
	i--;
	while(i>=0){
		printf("%c",text[i]);
		i--;
	}
}
