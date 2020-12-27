#include<stdio.h>
#include<math.h>
main(){
	float x,x2,y,y2;
	scanf("%f,%f %f,%f",&x,&y,&x2,&y2);
	printf("%f",sqrt(pow(x-x2,2)+pow(y-y2,2)));
}
