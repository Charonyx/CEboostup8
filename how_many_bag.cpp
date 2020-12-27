#include<stdio.h>
main(){
	int i,k[i],sum=0,j;
	for(i=0;i<10;i++){
		scanf("%d",&k[i]);
		if(sum += k[i] > 100 ){
			sum -= k[i] - 100;
			j++;
		}
	}
	if(sum>=0){
		j++;
	}	
	printf("%d",j);
	
}
