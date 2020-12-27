#include<stdio.h>
main(){
	int i,n,a[i];
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(a[i] < a[j]){
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	printf("%d",a[1]);
}
/*
#include<stdio.h>
main(){
	int i,n,a[i],m=999999,max=-999999;
	for(i=0;i<3;i++){
		scanf("%dd",&n);
		a[i] = n;
//		if(n>=0){
			if(n >= max){
				max = n;
			}
			if(n <= m){
				m = n;
			}					
//		}
	}
	for(i=0;i<3;i++){
		if(a[i] != max && a[i] != m && a[i] > 0){
			printf("%d",a[i]);
		}
	}
}
*/
