#include<stdio.h>
#include<string.h>
main(){
	int i;
	char n[100000];
	scanf("%s",n);
	for(i=strlen(n)-1;i>=0;i--){
		printf("%c",n[i]);
		if((i)%3 == 0 && i!=0 && i!=strlen(n)-1){
			printf(",");
		}
		
	}
}
