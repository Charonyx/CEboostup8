#include<stdio.h>
int n;
void triangle(int);
main(){
	scanf("%d",&n);
	triangle(n);
}
void triangle(int n){
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=n-i;j>0;j--){
			printf("* ");
		}
		printf("\n");
	}
	
}
