#include<stdio.h>
#include<math.h>
main(){
	float x1,x2,y1,y2;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	printf("Distance = %.3f",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}
