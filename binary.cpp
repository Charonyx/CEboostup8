#include<stdio.h>
main(){
	long i=0,j=0,n,a[1000000];
	scanf("%ld",&n);
	if(n >= 0 && n <= 65536){
		while (n > 0) { 
	        a[i] = n%2; 
	        n /= 2; 
	        i++; 
    	} 
 /*
 		for(i=0;n>0;i++){ 
	        a[i] = n%2; 
	        n /= 2; 
    	} 
 */   	
    	
    	for(j=i-1;j>=0;j--){
    		printf("%ld",a[j]);
		}
	}
}
