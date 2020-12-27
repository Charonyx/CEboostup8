#include<stdio.h>
#include<math.h>
main(){
	double n;
	scanf("%lf",&n);
	
	if(fmod(n,2.0) == 0.0){
		printf("even");
	}
	else if(fmod(n,2.0) == 1.0 || fmod(n,2.0) == -1.0){
		printf("odd");
	}
	else{
		printf("Error");
	}
}
