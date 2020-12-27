#include<stdio.h>
main(){
	int i=0;
	char a[10];
	for(i=0;i<5;i++){
		scanf(" %c",&a[i]);
	}
	printf("C D E F G");
	for(i=0;i<5;i++){
		if(a[i] == 'C'){
			printf("\nO");
		}
		else if(a[i] == 'D'){
			printf("\n  O");
		}
		else if(a[i] == 'E'){
			printf("\n    O");
		}
		else if(a[i] == 'F'){
			printf("\n      O");
		}
		else if(a[i] == 'G'){
			printf("\n        O");
		}
	}
}
