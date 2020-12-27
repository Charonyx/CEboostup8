#include<stdio.h>
main(){
	int d;
	scanf("%d",&d);
	if(d>0 && d<31){
		if(d%2 == 0 && d%3 == 0){
			printf("Both of them.");
		}
		else if(d%2 == 0){
			printf("Cactus");
		}	
		else if(d%3 == 0){
			printf("Bowstring Hemp");
		}
		else{
			printf("Nothing.");
		}			
	}
	else{
		printf("Invalid date.");
	}

}
