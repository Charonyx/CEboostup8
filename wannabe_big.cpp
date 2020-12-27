#include<stdio.h>
#include<string.h>
main(){
	int i=0;
	char text[1000];
	scanf("%[^\n]",text);
	
	while(text[i] != '\0'){
		if(text[i] >= 'a' && text[i] <= 'z'){
			text[i]-=32;
		}
		i++;
	}
	printf("%s",text);
}
