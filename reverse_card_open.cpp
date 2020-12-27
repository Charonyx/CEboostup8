#include<stdio.h>
#include<string.h>
main(){
 	 int i=0,j=0,n;
 	char text[100],re[1000];
 	scanf("%[^\n]",text);
 	n = strlen(text)-1;
 //	printf("%d\n",n);
 	for(i=n;i>=0;i--){
 		re[j]=text[i];
		 j++;	
	}
	re[j] = '\0';
	printf("%s",re);
}
