#include<stdio.h>
#include<string.h>
main(){
	char text[1000];
	int i=0,a=0,A=0;
	scanf("%[A-Za-z]",text);
	while(text[++i] != '\0'){
		if(text[i] >= 97 && text[i] <= 122){
			a++;
		}
		if(text[i] >= 65 && text[i] <= 90){
			A++;
		}
	}
	if(a>0 && A>0){
		printf("Mix");
	}
	else if(A==0){
		printf("All Small Letter");
	}
	else{
		printf("All Capital Letter");
	}
		
	
}
