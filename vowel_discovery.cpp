#include<stdio.h>
main(){
	int i=0,x=0;
	char text[300];
	scanf("%[^\n]",text);
	while(text[i]!='\0'){
		if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E' || text[i]=='I' || text[i]=='O' || text[i]=='U')
			x++;
		i++;
	}
	if(x>=10){
		printf("Lucky for you, that's what I like, that's what I like.");
	}
	else
		printf("Too Eazy %d vowel(s)!!! :P",x);
}
