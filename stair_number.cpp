#include<stdio.h>
main(){
	int s,i,j;
	scanf("%d",&s);
	if(s >= 0){
		for(i=0;i<s;i++){
			for(j=1;j<=i+1;j++){
				printf("%d ",j);
			}
			printf("\n");
		}
	}
}
