#include<stdio.h>
//#include<string.h>
main(){
	char text[1001];
	int i=0,j=0,n=26; //6 10
//	while(j!=26)
//	{
		scanf("%[^\n]",text);
		while(text[i] != '\0'){
			if((text[i] >= 65 && text[i] <=  90-n) || (text[i] >= 97 && text[i] <= 122-n)){
				text[i] += n;
			}
			else if(text[i] >= 122+1-n && text[i] <= 122){
				text[i] -=(26-n);
			}
			else if(text[i] >= 90+1-n && text[i] <= 90){
				text[i] -=(26-n);
			}
			i++;
		}
		printf("\n%s\n",text);
		
//		j++;	
//		n++;
//	}
}
