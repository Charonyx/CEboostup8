#include<stdio.h>
#include<string.h>
main(){
	int i=0,j;
	char text[20],h[1000],v[1000],v2[1000]={""};
	scanf("%s",text);
	
	if(strcmp(text,"Horizontal") == 0){
		scanf(" %[^\n]",h);
		while(h[i] != '\0'){
			printf("%c\n",h[i]);
			i++;
		}
	}
	else if(strcmp(text,"Vertical") == 0){
		while(strcmp(v,"!!") != 0){
			scanf(" %[^\n]",v);

			if(strcmp(v,"!!") != 0){
				strcat(v2,v);
			}
				
		}
		printf("%s",v2);
	
	}
}
