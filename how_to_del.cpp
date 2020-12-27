#include<stdio.h>
main(){
	char text[1000];
	int i=0,j=0;
	scanf("%s]",text);
	while(text[i] != '\0'){
		if((text[i] >= '0' && text[i] <= '9') || (text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')){
			printf("%c",text[i]);
		}
		i++;
	}
}
