#include<stdio.h>
#include<string.h>
main(){

	int i=0,j=0,n;
	char num[1000],num2[1000];
	scanf("%[-0-9.] %u",num,&n);
	while(num[j] != '\0'){
		num2[i]=num[j];
				
		if(num[j] == '.'){
			break;
		}
		j++;
		i++;
	}	
	num2[i] = '\0';
//	i = strlen(num);	
	if(n<=i && n>0){
		i-=n;
		printf("%c",num2[i]);
	}	
}
/*	integer
#include<stdio.h>
#include<string.h>
main(){

	unsigned int i=0,n;
	char num[1000];
	scanf("%[-0-9.] %u",num,&n);
	i = strlen(num);	
	if(n<=i && n>0){
		i-=n;
		printf("%c",num[i]);
	}
	
}
*/
