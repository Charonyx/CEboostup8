#include<stdio.h>
#include<string.h>
main(){
	char text[20],l='|';
	scanf("%[^\n].20s",text);
	printf("|====================|");
	printf("\n%c%21c\n%c",l,l,l);
//	printf("\n%c%s%21c",l,text,l);
	for(int i=0;i<(20-strlen(text))/2;i++){
		printf(" ");
	}
	if(strlen(text)%2==1){
		printf(" ");
	}
	printf("%s",text);	
	for(int i=0;i<(20-strlen(text))/2;i++){
		printf(" ");
	}

	printf("%c\n%c%21c",l,l,l);
	printf("\n|====================|");	
}
