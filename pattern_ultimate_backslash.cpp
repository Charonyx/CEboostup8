#include<stdio.h>
main(){
	int n,i,j;
	scanf("%u",&n);
	if(n>=0){
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				printf(" ");
			}
			printf("\\\n");
		}
	}
	
}
