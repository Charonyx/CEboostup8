#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,ans=0.0,ans2;
	scanf("%f %f %f",&a,&b,&c);
	ans=pow(b,2.0)-4.0*a*c;
	//printf("%f",ans);
	if(ans < 0){
		printf("Error");
	}
	else if(ans == 0){
		//if
		printf("x = %.2f",-b/2.0*a);
	}
	else{
		c = (-b-sqrt(ans))/2.0*a;
		ans2 = (-b+sqrt(ans))/2.0*a;
		if(c < ans2)
			printf("x1 = %.2f, x2 = %.2f",c,ans2); 
		else
			printf("x1 = %.2f, x2 = %.2f",ans2,c); 		
	}	
}
/*
#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,ans=0.0,ans2=0.0;
	scanf("%f %f %f",&a,&b,&c);
	ans=pow(b,2.0)-4.0*a*c;
	printf("%f",ans);
	if(ans < 0.0){
		printf("Error");
	}
	else if(ans == 0.0){
		printf("x = %.2f",(-b)/2.0*a);
	}
	else{
		printf("x1 = %.2f, x2 = %.2f",((-b)-sqrt(ans))/2.0*a,((-b)+sqrt(ans))/2.0*a); 
	}	
}
*/
