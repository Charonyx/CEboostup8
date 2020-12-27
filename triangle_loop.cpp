#include<stdio.h>
main(){
	int s,i,j;
	scanf("%d",&s);
	if(s > 0){
		for(i=0;i<s;i++){
			for(j=0;j<i+1;j++){
				printf("* ");
			}
			printf("\n");
		}
	}
	else
		printf("\nOop! Please type a Positive Integer ;p");
	
}
