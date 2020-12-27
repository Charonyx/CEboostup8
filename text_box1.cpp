#include<stdio.h>
#include<string.h>
main(){
	int i,j=0;
	char text[100];
	
	scanf("%s",text);
	if(strlen(text) == 3){
		for(i=0;i<3;i++){
			
			if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
				j++;
			}
		}
		if(j == 3){
			printf("*****\n");
			printf("*%s*\n",text);
			printf("*****\n");	
		}
		else{
			printf("Error");
		}
	}
	else{
		printf("Error");
	}	


}
/*
#include<stdio.h>
#include<string.h>
main(){
	int i,j=0;
	char text[i];
	scanf("%s",text);
	for(i=0;i<3;i++){
		if(text[i] >= 65 && text[i] <= 87 ) {
			j++;
		}
		else if(text[i] >= 97 && text[i] <= 119){
			j++;
		}
    else{
    printf("Error");
    }

	}
	if(strlen(text) == 3 && j == 3){
		printf("*****\n");
		printf("*%s*\n",text);
		printf("*****");	
	}
	else{
		printf("Error");
	}

}
*/
