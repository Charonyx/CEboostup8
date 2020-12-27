#include<stdio.h>
main(){
	int i=0;
	char text[1000];
	scanf("%[^\n]",text);
	while(text[i] != '\0'){
		i++;
	}
	printf("%d",i); 
}
