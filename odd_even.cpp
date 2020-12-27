#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	
	if(n % 2 == 0){
		printf("even");
	}
	else if(n % 2 == 1 || n % 2 == -1){
		printf("odd");
	}
	else{
		printf("Error");
	}
}
/*
#include<stdio.h>
#include<math.h>
int main(){
	float n;
	scanf("%f",&n);
	if(n!=-0.0){	
		if(fmod(n,2.0)==0.0 || fmod(n,-2.0)==0.0){
			printf("even");
		}
		else if(fmod(n,2.0)==1.0 || fmod(n,-2.0)==-1.0){
			printf("odd");
		}
		else{
			printf("Error");
		}	
	}
	else{
		printf("Error");
	}
	return 0;
}
*/
