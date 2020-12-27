#include<stdio.h>
#include<string.h>
main(){
	char text[100000];
	int i=0;
	scanf("%[^\n]",text);
	while(text[i] != '\0'){
		if((text[i] >= 65 && text[i] <= 87 ) || (text[i] >= 97 && text[i] <= 119)){
			text[i] +=3;
		}
		else if(text[i] >= 120 && text[i] <= 122){
			text[i] -=23;
		}
		else if(text[i] >= 88 && text[i] <= 90){
			text[i] -=23;
		}
		i++;
	}
	printf("%s",text);
		
	
}
