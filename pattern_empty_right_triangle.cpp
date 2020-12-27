#include<stdio.h>
main(){
	unsigned int i,j,k,n;
	scanf("%u",&n);
	if(n>0){
		for(i=0;i<n;i++){
			for(j=0;j<i+1;j++){
				if(j==0 || j==i || i==n-1){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}
