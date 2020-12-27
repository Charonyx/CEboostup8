#include<stdio.h>
//#include<string.h>
main(){
//	char text={"INFORMATION SECURITY","ADVISOR GROUP","ISAG ","APPLICATION","INTERESTED IN CYBERSECURITY? ","SURE YOU SECURE ENOUGH?","WANNA TRY HACKING? ","FIND YOUR WAY IN...","APPLICATION FORM?","IT'S HIDDEN IN THIS PICTURE FILE."};
	char text[101][1000];
	int i=0,j=0,n=-4;
	while(j!=26)
	{
		scanf("%s",text[i]);
		while(text[j][i] != '\0'){
			if((text[j][i] >= 65 && text[j][i] <= 86 ) || (text[j][i] >= 97 && text[j][i] <= 118)){
				text[j][i] += 4+n;
			}
			else if(text[j][i] >= 119 && text[j][i] <= 122){
				text[j][i] -=22+n;
			}
			else if(text[j][i] >= 87 && text[j][i] <= 90){
				text[j][i] -=22+n;
			}
			i++;
		}
		printf("%s\n",text[i]);
		
		j++;	
		n++;
	}

		
	
}
