#include<stdio.h>
main(){
	unsigned int i=0,j=0,n,k;
	char id[1000];
	scanf("%[0-9]",id);
	scanf("%u %u",&n,&k);
	printf("Search : %u\nResult : ",k);
	i = n*(k-1);
	while(j<n){
		printf("%c",id[i]);
		i++;
		j++;	
	}
}
