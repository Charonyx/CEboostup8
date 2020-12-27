#include<stdio.h>
#include<string.h>
main(){
	int i=0,b=0;
	char text[1100];
	scanf("%[^\n]",text);
	while(text[i] != '\0'){
		if(text[i]=='g' && text[i-1]=='n' && text[i-2]=='i' && text[i-3]=='p'){
			b=1;
		}
		i++;
	}
	if(i<=100){
		if(b==1){
			printf("CUTE-3-");
		}
		else{
			printf("NOT CUTE");
		}		
	}
	else if(i>100){
		printf("ERROR");
	}

}
