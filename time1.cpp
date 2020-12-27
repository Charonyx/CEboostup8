#include<stdio.h>
main(){
	int h,m,s;
	scanf("%d",&s);
	if(s>=0){
		h = s/3600;
		m = (s-h*3600)/60;
		s%=60;
		printf("%d hour(s) %d minute(s) %d second(s).",h,m,s);
	}
}
