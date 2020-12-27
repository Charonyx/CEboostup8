#include<stdio.h>
#include<ctype.h>
main(){
	char text[1000];
	int i,c=0,a[9]={0,0,0,0,0,0,0,0};
	scanf("%s",text);
	while(text[i] != '\0'){
		text[i] = tolower(text[i]);
		if(text[i] == 'c'){
			a[0]++;
		}
		else if(text[i] == 'e'){
			a[1]++;
		}
		else if(text[i] == 'b'){
			a[2]++;
		}
		else if(text[i] == 'o'){
			a[3]++;
		}
		else if(text[i] == 's'){
			a[4]++;
		}
		else if(text[i] == 't'){
			a[5]++;
		}
		else if(text[i] == 'u'){
			a[6]++;
		}
		else if(text[i] == 'p'){
			a[7]++;
		}
		
		if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==2 && a[4]==1 && a[5]==1 && a[6]==1 && a[7]==1){
			a[0]--;
			a[1]--;
			a[2]--;
			a[3]-=2;
			a[4]--;
			a[5]--;
			a[6]--;
			a[7]--;
			c++;
		}
		i++;
	}
	printf("%u",c);
}
