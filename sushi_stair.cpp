#include<stdio.h>
#include<string.h>
main(){
	char text[1000][100];
	int i=0,n=0,n2[1000];
	while(1){
		scanf("%s",text[i]);
		if(strcmp(text[i],"Stop")==0){
			break;
		}
		n+=strlen(text[i]);
		n2[i]=n;
//		printf("%d %d ",n,n2[i]);
		i++;
	}
	for(int j=0;j<i;j++){
		printf("%s\n",text[j]);
		for(int k=0;k<n2[j];k++){
			printf(" ");
		}
	}

}
