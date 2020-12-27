#include <stdio.h>
main(){
    unsigned int i,j,n,count;
    scanf("%u", &n);
    if(n>0){
    	count = (n+1)*2-1;
		for(i=1; i<=count; i++){
		    for(j=1; j<=count; j++){
		        if(j==i || (j==count- i+1)){
		            printf("*");
		        }
		        else{
		            printf(" ");
		        }
		    }
		    printf("\n");
		}   	
	}
	else{
		printf("Error");
	}
   


}
