#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char text[1000],Text[]="|\\__'\\\"-*-*-*-\"/'__/|";
//	scanf("%s",text);	
	scanf("%[^\n]",text);
//	printf("|\\__'\\\"-*-*-*-\"/'__/|");
/*
	for(i=0;i<strlen(Text);i++){
		printf("%c%s",Text[i],text);
	}
*/
	printf("%s",Text);
}
