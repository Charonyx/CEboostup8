#include<stdio.h>
int main(){
	double x,y;
	printf("Enter point(x,y) in form x y (ex. 2 3 is point(2,3)) : ");
	scanf("%lf %lf",&x,&y);

	if(x == 0 && y == 0){
		printf("Origin");
	}
	else if(y == 0){
		printf("X Axis");
	}
	else if(x == 0){
		printf("Y Axis");
	}

	else if(x > 0 && y > 0){
		printf("1");
	}
	else if(x < 0 && y > 0){
		printf("2");
	}
	else if(x < 0 && y < 0){
		printf("3");
	}
	else if(x > 0 && y < 0){
		printf("4");
	}
}

