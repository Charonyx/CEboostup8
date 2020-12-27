#include<stdio.h>
main(){
	int m[5],i,j=0;
	for(i=0;i<5;i++){
//		printf("%d ",i);
		scanf("%d",&m[i]);
		if(m[i] == 5){
			j++;
		}
		else if(j<3){
			j=0;	
		}
	}
//	printf("%d",j);
	if(j >= 3){
		printf("HaHaHa!!!");
	}
	else{
		printf("...");
	}
	
}
