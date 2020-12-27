#include<stdio.h>
main(){
	double s,s1;
	scanf("%lf",&s);
	s*=12.0;
	
	if(s>5000000){
		s1 = s*0.65;		
	}
	else if(s>2000000){
		s1 = s*0.7;
	}
	else if(s>1000000){
		s1 = s*0.75;
	}
	else if(s>750000){
		s1 = s*0.8;
	}
	else if(s>500000){
		s1 = s*0.85;
	}
	else if(s>300000){
		s1 = s*0.9;
	}
	else if(s>150000){
		s1 = s*0.95;
	}
	else if(s<=150000){
		s1 = s;
	}
	printf("%.2lf",s1/12.0);	

}

