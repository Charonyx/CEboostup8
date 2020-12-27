#include<stdio.h>
main(){
	int s,i,j;
	scanf("%d",&s);
	if(s > 0){
		for(i=0;i<s;i++){
			for(j=s-i;j>0;j--){
				printf("* ");
			}
			printf("\n");
		}
	}
	else
		printf("\nOop! Please type a Positive Integer ;p");
	
}
