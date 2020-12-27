#include<stdio.h> 

main() { 
    int money;
	scanf("%d", &money);
	if(money >0)
		printf("%d, %d, %d, %d", money/1000, (money%1000)/500, ((money%1000)%500)/100, (money%1000)%500%100/50);
	else
		printf("error");

}
