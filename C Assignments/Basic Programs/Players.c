#include<stdio.h>
typedef struct player{
	char name[20];
	int no_of_matches;
	int runs_scored;
	int wickets;
}player;
void store_players(player*,int);
void display_players(player*,int);
void maximum_run(player*,int);
void maximum_wicket(player*,int);
void main (){
	player p[10];
	store_players(p,10);
	display_players(p,10);
	maximum_run(p,10);
	maximum_wicket(p,10);
}
void store_players(player* p, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter name of player, no of matches played, runs scored and wickets taken \n");
		fflush(stdin);
		scanf("%[^\n]%*c %d %d %d",&p[i].name, &p[i].no_of_matches, &p[i].runs_scored, &p[i].wickets);
	}
}
void display_players(player* p, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Player 's name : %s , %d matches played, %d runs scored, %d wickets taken \n",p[i].name,p[i].no_of_matches,p[i].runs_scored,p[i].wickets);	
	}
}
void maximum_run(player* p, int n){
	int i,max,j;
	max= p[0].runs_scored;
	for (i=0;i<n;i++){
		if (p[i].runs_scored>max){
			max= p[i].runs_scored;
			j= i;
		}
	}
	printf("Maximum runs scored is %d by %s \n", max,p[j].name);
}
void maximum_wicket(player* p, int n){
	int i,max,j;
	max= p[0].wickets;
	for (i=0;i<n;i++){
		if (p[i].wickets>max){
			max= p[i].wickets;
			j= i;
		}
	}
	printf("Maximum wickets taken is %d by %s \n", max,p[j].name);
}
