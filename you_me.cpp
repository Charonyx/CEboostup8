#include<stdio.h>
#include<math.h>
main(){
	double a,b,c,ans=0.0,ans2=0.0;
	scanf("%lf %lf %lf",&a,&b,&c);
	ans=pow(b,2.0)-4.0*a*c;
	//printf("%f",ans);
	if(ans < 0){
		printf("Error");
	}
	else if(ans == 0){
		printf("x = %.2lf",-b/2.0*a);
	}
	else{
		c = (-b-sqrt(ans))/2.0*a;
		ans2 = (-b+sqrt(ans))/2.0*a;
		if(c < ans2)
			printf("x1 = %.2lf, x2 = %.2lf",c,ans2); 
		else
			printf("x1 = %.2lf, x2 = %.2lf",ans2,c); 		
	}	
}
