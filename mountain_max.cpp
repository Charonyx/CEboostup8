#include<stdio.h>
main(){
	unsigned int i=0,j=0,n,a,num[100];
	scanf("%u",&n);
	if(n>1 && n<100){
		for(i=0;i<n;i++){
			scanf("%u",&num[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(num[i] < num[j]){
					a = num[j];
					num[j] = num[i];
					num[i] = a;
				}
			}
		}
		printf("%u\n%u",num[0],num[1]);		
	}
}
/*
#include<stdio.h>
main(){
	unsigned int i=0,j=0,n,a,num[100];
	scanf("%u",&n);
	if(n>1 && n<100){
		for(i=0;i<n;i++){
			scanf("%u",&num[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(num[i] > num[j]){
					a = num[j];
					num[j] = num[i];
					num[i] = a;
				}
			}
		}
		printf("%u\n%u",num[0],num[1]);		
	}
}
*/
