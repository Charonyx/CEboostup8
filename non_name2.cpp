#include<stdio.h>
main(){
	int j,i,k=0,a[10],b[10],c[20];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		scanf("%d",&b[i]);
		for(j=0;j<10;j++){
			if(a[j]==b[i]){
				c[k] = b[i];
				k++;
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%d\n",c[i]);
	}
}
