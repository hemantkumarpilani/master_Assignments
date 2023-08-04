#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ctr=0;
typedef struct player{
	char country[20];
	char name[20];
	int no_of_matches;
	int runs_scored;
	int wickets;
	int dismissal;
	float average;
	int no_of_hundred;
	int no_of_fifty;
	int ball_faced;
	float strike_rate;
}player;
player *p;
void store_players(player*);
void display_players(player*,int);
void maximum_run(player*,int);
void maximum_wicket(player*,int);
void best_average(player*,int);
void maximum_hundred(player*,int);
void maximum_fifty(player*,int);
void best_strike_rate(player*,int);
void search_player_information(player*,int);
void top_3_players(player*,int);
void delete_player(player*);
void main (){
	int ch,i,n;
	p= (struct player*)calloc(1,sizeof(struct player));
	do{
		printf("1. Add player\n");
		printf("2. Display\n");
		printf("3. Maximum runs\n");
		printf("4. Maximum wickets\n");
		printf("5. Best average\n");
		printf("6. Maximum centuries\n");
		printf("7. Maximum fifties\n");
		printf("8. Best strike rate\n");
		printf("9. Search player 's information\n");
		printf("10. Top 3 players\n");
		printf("11. Delete player\n");
		printf("12. Exit\n");
		printf("Enter a choice \n");
		scanf("%d",&ch);
		switch (ch){
			case 1:
				store_players(p);
				break;
			case 2:
				display_players(p,ctr);
				break;
			case 3:
				maximum_run(p,ctr);
				break;
			case 4:
				maximum_wicket(p,ctr);
				break;
			case 5:
				best_average(p,ctr);
				
				break;
			case 6:
				maximum_hundred(p,ctr);
				break;
			case 7:
				maximum_fifty(p,ctr);
				break;
			case 8:
				best_strike_rate(p,ctr);
				break;
			case 9:
				search_player_information(p,ctr);
				break;
			case 10:
				top_3_players(p,ctr);
				break;
			case 11:
				delete_player(p);
				break;
			default:
				printf("Enter correct choice \n");
				break;
		}
	}while (ch!=12);

	
}
void store_players(player* p){
	int i;
	if (ctr==0){
		for(i=0;i<1;i++){
			fflush(stdin);
			printf("Enter country :-\n");
			scanf("%[^\n]%*c",&p[i].country);
			fflush(stdin);
			
			printf("Enter name :-\n");
			scanf("%[^\n]%*c",p[i].name);
			printf("Matches played :-\n");
			scanf("%d",&p[i].no_of_matches);
			printf("Runs scored :-\n");
			scanf("%d",&p[i].runs_scored);
			printf("Wickets taken :-\n");
			scanf("%d",&p[i].wickets);
			printf("Dismissal :-\n");
			scanf("%d",&p[i].dismissal);
			printf("Centuries :-\n");
			scanf("%d",&p[i].no_of_hundred);
			printf("Fifties :-\n");
			scanf("%d",&p[i].no_of_fifty);
			printf("Balls faced :-\n");
			scanf("%d",&p[i].ball_faced);
			p[i].average= (p[i].runs_scored/((float)(p[i].dismissal)));
			p[i].strike_rate= (p[i].runs_scored/((float)(p[i].ball_faced)))*100; 
			ctr= ctr+1;
			}
		}
		else {
			p= (struct player*)realloc(p,1*sizeof(struct player));
			for(i=0;i<1;i++){
			fflush(stdin);
			printf("Enter country :-\n");
			scanf("%[^\n]%*c",&p[i+ctr].country);
			fflush(stdin);
			printf("Enter name :-\n");
			scanf("%[^\n]%*c",p[i+ctr].name);
			printf("Matches played :-\n");
			scanf("%d",&p[i+ctr].no_of_matches);
			printf("Runs scored :-\n");
			scanf("%d",&p[i+ctr].runs_scored);
			printf("Wickets taken :-\n");
			scanf("%d",&p[i+ctr].wickets);
			printf("Dismissal :-\n");
			scanf("%d",&p[i+ctr].dismissal);
			printf("Centuries :-\n");
			scanf("%d",&p[i+ctr].no_of_hundred);
			printf("Fifties :-\n");
			scanf("%d",&p[i+ctr].no_of_fifty);
			printf("Balls faced :-\n");
			scanf("%d",&p[i+ctr].ball_faced);
			p[i+ctr].average= p[i+ctr].runs_scored/((float)(p[i+ctr].dismissal));
			p[i+ctr].strike_rate= (p[i+ctr].runs_scored/((float)(p[i+ctr].ball_faced)))*100; 
			ctr= ctr+1;
			}	
		}	
	}
void display_players(player* p, int ctr){
	int i;
	printf("Country		Name Of Player		Matches Played		Runs Scored		Wickets Taken		Average		 100		 50		Balls faced		strike rate\n");
	for (i=0;i<ctr;i++){
		printf("%s		%s			%d			%d			%d 			    	%f	 %d		 %d	 	%d			%f\n",p[i].country, p[i].name, p[i].no_of_matches, p[i].runs_scored, p[i].wickets, p[i].average, p[i].no_of_hundred, p[i].no_of_fifty, p[i].ball_faced, p[i].strike_rate);
	}
}
void maximum_run(player* p, int ctr){
	int i,max,j;
	max= p[0].runs_scored;
	for (i=0;i<ctr;i++){
		if (p[i].runs_scored>max){
			max= p[i].runs_scored;
			j= i;
		}
	}
	printf("Maximum runs scored is %d by %s \n", max,p[j].name);
}
void maximum_wicket(player* p, int ctr){
	int i,max,j;
	max= p[0].wickets;
	for (i=0;i<ctr;i++){
		if (p[i].wickets>max){
			max= p[i].wickets;
			j= i;
		}
	}
	printf("Maximum wickets taken is %d by %s \n", max,p[j].name);
}
void best_average(player* p, int ctr){
	
	float average;
	int i=0,j=0;
	average= p[i].average;
	printf("after average= %d\n",average);
	for (i=0;i<ctr;i++){
		if (p[i].average>average)
		{
			average= p[i].average;
			j=i;
		}	
	}
	printf("The best average is %f and batsman name having best average is %s \n",average,p[j].name);
}
void maximum_hundred(player* p ,int ctr){
	int i,j=0,max;
	max= p[0].no_of_hundred;
	for (i=0;i<ctr;i++){
		if (p[i].no_of_hundred>max){
			printf("%d\n",i);
			max= p[i].no_of_hundred;
			j=i;
		}	
	}
	printf("Maximum centuries is %d and scored by %s \n",max,p[j].name);
}
void maximum_fifty(player* p ,int ctr){
	int i,j=0,max;
	max= p[0].no_of_fifty;
	for (i=0;i<ctr;i++){
		if (p[i].no_of_fifty>max){
			max= p[i].no_of_fifty;
			j=i;
		}
	}
	printf("Maximum fifties is %d and scored by %s \n",max,p[j].name);
}
void best_strike_rate(player* p, int ctr){
	int i,j,max;
	max= p[0].strike_rate;
	for (i=0;i<ctr;i++){
		if (p[i].strike_rate>max){
			max= p[i].strike_rate;
			j=i;
		}
	}
	printf("Name of player having maximum strike %d is %s\n",max,p[j].name);
}
void search_player_information(player* p, int ctr){
	int i;
	char search_player[20];
	printf("Enter name :-\n");
	fflush(stdin);
	scanf("%[^\n]%*c",&search_player);
	for (i=0 ; i<ctr; i++){
		int a;
		a= strcmp(search_player,p[i].name);
		if(a==0){
			printf("Country		Name Of Player		Matches Played		Runs Scored		Wickets Taken		Average		 100		 50		Balls faced		strike rate\n");
			printf("%s		%s			%d			%d			%d 			    	%f	 %d		 %d	 	%d			%f\n",p[i].country, p[i].name, p[i].no_of_matches, p[i].runs_scored, p[i].wickets, p[i].average, p[i].no_of_hundred, p[i].no_of_fifty, p[i].ball_faced, p[i].strike_rate);
			break; 
			}
	}
	printf("Enter correct name\n");
}
void top_3_players(player* p, int ctr){
	int i,j,runs[ctr];
	for (i=0;i<ctr;i++){
		runs[i]= p[i].runs_scored;
	}
	for (i=0;i<ctr-1;i++){
		int flag=0;
		for (j=0;j<ctr-1-i;j++){
			if (runs[j]<runs[j+1]){
				int temp;
				temp= runs[j];
				runs[j]= runs[j+1];
				runs[j+1]= temp; 
			}
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<ctr;j++){
			if (runs[i]==p[j].runs_scored){
				printf("%s \n",p[j].name);
				break;
			}
		}
	}
}

void delete_player (player* p){
	char name[20];
	fflush(stdin);
	printf("Enter name\n");
	scanf("%[^\n]%*c",&name);
	int i;
	for(i=0; i<ctr; i++){
		int a;
		a= strcmp(name,p[i].name);
		if(a==0){
			if(i==ctr-1){
				ctr=ctr-1;
			}
			else {
				p[i]=p[i+1];
				int k;
				for (k=i+1; k<ctr-1; k++){
					p[k]=p[k+1];
				}
				ctr= ctr-1;
				break;
			}
		}
	}
}
