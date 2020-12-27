#include<stdio.h>
main(){
	long m,m2,n[8],i=0;
	scanf("%ld %ld",&m,&m2);
	if(m>=0 && m2>=0){
		m-=m2;
		if(m/100 >= 0){
			n[i] = int(m/100);
			m %= 100;
			i++;
		}
		if(m/50 >= 0){
			n[i] = int(m/50);
			m %= 50;
			i++;			
		}
		if(m/20 >= 0){
			n[i] = int(m/20);
			m %= 20;
			i++;			
		}
		if(m/10 >= 0){
			n[i] = int(m/10);
			m %= 10;
			i++;			
		}
		if(m/5 >= 0){
			n[i] = int(m/5);
			m %= 5;
			i++;			
		}
		if(m/2 >= 0){
			n[i] = int(m/2);
			m %= 2;
			i++;			
		}
		if(m/1 >= 0){
			n[i] = m;
		}
		for(i=0;i<6;i++){
			printf("%ld, ",n[i]);
		}
		printf("%ld ",n[6]);
	}
}
/*
#include<stdio.h> 

int main() { 
    int money, cost;
	scanf("%d %d", &money, &cost);

	money -= cost;

	printf("%d, %d, %d, %d, %d, %d, %d", money/100, (money%100)/50, ((money%100)%50)/20, (((money%100)%50)%20)/10, ((((money%100)%50)%20)%10)/5, (((((money%100)%50)%20)%10)%5)/2, (((((money%100)%50)%20)%10)%5)%2);

	
    return 0;
}
*/
