#include<stdio.h>
main(){
	long i,a[6];
	char text[1000];
	for(i=0;i<5;i++){
		scanf("%ld",&a[i]);
	}
	scanf("%s",text);
	for(i=0;i<5;i++){
		printf("%ld",a[i]);
		if(i != 4){
			printf("%s",text);
		}
	}
}
