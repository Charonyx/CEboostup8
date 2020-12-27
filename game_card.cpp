#include<stdio.h>
main(){
	int i,j,n,k;
	scanf("%d",&n);
	if(n>=1){
		for(i=0;i<n-1;i++){
			for(j=0;j<n-(i+1);j++){
				printf(" ");
			}
			for(j=0;j<i+1;j++){
				printf("* ");
			}
			printf("\n");
		}
//		for(i=0;i<n;i++){
//			printf("* ");
//		}
//		printf("\n");
		for(i=n;i>0;i--){

			for(j=n-i;j>0;j--){
				printf(" ");
			}			
			for(j=i;j>0;j--){
				printf("* ");
			}
			printf("\n");
		}		
	}
	else{
		printf("Error");
	}
}
