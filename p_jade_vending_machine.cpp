#include<stdio.h>
main(){
	unsigned long m,n[8],i=0;
	scanf("%lu",&m);
	if(m>0 && m%50==0){
//		printf("%d ",m);
		if(m/1000 >= 0){
			n[i] = int(m/1000);
			m %= 1000;
			i++;
		}
		if(m/500 >= 0){
			n[i] = int(m/500);
			m %= 500;
			i++;			
		}
		if(m/100 >= 0){
			n[i] = int(m/100);
			m %= 100;
			i++;			
		}
		if(m/50 >= 0){
			n[i] = int(m/50);				
		}
		
		for(i=0;i<3;i++){
			printf("%lu, ",n[i]);
		}
		printf("%lu",n[3]);
	}
	else
		printf("Error");
}
