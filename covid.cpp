#include<stdio.h>
main(){
	int p;
	scanf("%d",&p);
	if(p>=0){
		printf("%d",(p-(p/4))*249);
	}
}
