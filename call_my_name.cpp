#include<stdio.h>
#include<ctype.h>
main(){
	int i=1;
	char n[100],s[100];
	scanf("%s %s",n,s);
	n[0]=toupper(n[0]);
	s[0]=toupper(s[0]);
	
	while(n[i] != '\0'){
		n[i]= tolower(n[i]);
		i++;
	}
	i=1;
	while(s[i] != '\0'){
		s[i]= tolower(s[i]);
		i++;
	}
	printf("%s %s\n%c.%c.",n,s,n[0],s[0]);
}
