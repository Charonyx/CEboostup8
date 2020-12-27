#include<stdio.h>
main(){
	int n,i,j;
	scanf("%d",&n);
	if(n>0){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("*");
			}
			printf("\n");
		}
	}
}
