#include<stdio.h>
main(){
	int x,i=0;
	char c[10];
	scanf("%d",&x);
	for(i=0;i<4;i++){
		scanf("%c",&c[i]);
//		printf(" %d",i);
	}
	scanf("%c",&c[i]);
	i=0;
	while(i<5){
		if(c[i]=='A'&& x>=20000){
			printf("A");
			break;
		}
		else if(c[i]=='B'&& x>=17500){
			printf("B");
			break;
		}
		else if(c[i]=='C'&& x>=18000){
			printf("C");
			break;
		}
		else if(c[i]=='D'&& x>=28250){
			printf("D");
			break;
		}
		else if(c[i]=='E'&& x>=27000){
			printf("E");
			break;
		}
		else if(c[i]=='F'&& x>=25000){
			printf("F");
			break;
		}
		else if(c[i]=='G'&& x>=21750){
			printf("G");
			break;
		}
		else if(c[i]=='H'&& x>=22000){
			printf("H");
			break;
		}
		i++;
	}
	
}
