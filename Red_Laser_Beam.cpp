#include<stdio.h>
#include<string.h>
main(){
	int i,j=0,a=0,n;
	char text[6][1000],text2[5][2];
	for(i=0;i<5;i++){
		scanf("%s %s",text[i],text2[i]);
		
		strcat(text[i], " ");
		strcat(text[i], text2[i]);
		
//		printf("%s",text[i]);
		j = strlen(text[i])-1;
		if(text[i][j] == 'A'){
			a++; 
		}
	}
//	printf("\na : %d",a);
	if(a > 0){
		for(i=0;i<5;i++){
			j=strlen(text[i])-1;
			if(text[i][j] == 'A'){
				printf("%s\n",text[i]);
			}
		}
	}
	else{
		printf("Red Laser Beam!!!");
	}
	
}
/*
#include<stdio.h> 

int main() { 
    char c, in[20], n = 0;
	for (int i = 0; i < 5; i++) {
    	scanf("%s %c", in, &c);
    	if (c == 'A') {
        	n++;
        	printf("%s %c\n", in, c);
        }
    }
	if (!n) puts("Red Laser Beam!!!");
    return 0;
}
*/

