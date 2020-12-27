#include<stdio.h>
main(){
	int i=0,b=1;
	char text[1000];
	scanf("%[^\n]",text);
	while(text[i] != '\0'){
		if(text[i]=='d' && text[i-1]=='a' && text[i-2]=='l' && text[i-3]=='a' && text[i-4]=='s'){
			b=0;
			break;
		}
		i++;
	}
	if(b==1){
		printf("I love this!");
	}
	else{
		printf("I hate this!");
	}
}
