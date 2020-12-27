#include<stdio.h>
#include<string.h>
main(){
	char text[100];
	int i=0;
	while(text != "Sleep"){
		scanf("%s",text);
		if(strcmp(text, "Shrek") == 0){
			i++;
		}
		else if(strcmp(text, "Sleep") == 0){
			break;
		}
	}
	printf("Shrek Count: %d",i);
}
