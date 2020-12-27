#include<stdio.h>
main(){
	float a,b,c,i=0,j;
	scanf("%f %f %f",&a,&b,&c);
	if(a>0 && b>0 && c>0){
		if(a+b > c)	i++;
		if(a+c > b)	i++;
		if(b+c > a)	i++;
		
		if(a*a+b*b == c*c)	j++;
		if(a*a+c*c == b*b)	j++;
		if(b*b+c*c == a*a)	j++;
		
		if(i == 3 && j >= 1){
			printf("Yes");
		}
		else{
			printf("No");
		}
	}
	else{
		printf("No");
	}
}
