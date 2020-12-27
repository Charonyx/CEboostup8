#include<stdio.h>
#include<string.h>
main(){
	char n[1000],c[1000];
	scanf("%[^\n] %[^\n]",n,c);
	if(strcmp(n,"Muto Yugi") == 0 && strcmp(c,"Buster Blader") == 0)
		printf("Ahhh, Impossible!!");
	else if(strcmp(n,"Muto Yugi") == 0 && strcmp(c,"Buster Blader") != 0)
		printf("You can't defeat me without your friends, Yugi.");
	else if(strcmp(n,"Jonouchi Katsuya") == 0)
		printf("You are just a loser dog, Jonouchi.");
	else if(strcmp(c,"Blue-Eyes White Dragon") == 0)
		printf("You're a third-rate Duelist with a fourth-rate Deck.");
	else
		printf("That's nothing special. I already have 36 copies of that card.");
	
}
