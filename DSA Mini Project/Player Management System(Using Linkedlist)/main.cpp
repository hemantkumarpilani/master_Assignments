#include "linkedlist.h"

int main(int argc, char** argv) {
	int choice=0;
	Linkedlist l1;
	while (choice!=7){
			cout<<"1. Insert data at the begining\n";
			cout<<"2. Insert data at the end \n";
			cout<<"3. Insert data at the position\n";
			cout<<"4. Delete Node based on position\n";
			cout<<"5. Delete Node based on runs scored\n";
			cout<<"6. Display \n";
			cout<<"7. Exit\n";
			cout<<"Enter your choice\n";
			cin>>choice;
			switch(choice){
				case 1:
					{
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
						cout<<"Enter country\n";
						cin>>country;
						cout<<"Enter name\n";
						cin>>name;
						cout<<"Enter no of matches\n";
						cin>>no_of_matches;
						cout<<"Enter runs scored\n";
						cin>>runs_scored;
						cout<<"Enter wickets\n";
						cin>>wickets;
						cout<<"Enter dismissal\n";
						cin>>dismissal;
						cout<<"Enter no of hundreds\n";
						cin>>no_of_hundred;
						cout<<"Enter no of fifties\n";
						cin>>no_of_fifty;
						cout<<"Enter balls faced\n";
						cin>>ball_faced;
						average= (runs_scored/((float)(dismissal)))*100;
						strike_rate= (runs_scored/((float)(ball_faced)))*100;
						player p(country,name,no_of_matches,runs_scored,wickets,dismissal,average,no_of_hundred,no_of_fifty,ball_faced,strike_rate);
						l1.insert_beginning(p);	
					}
					break;
					
				case 2:
					{
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
						cout<<"Enter country\n";
						cin>>country;
						cout<<"Enter name\n";
						cin>>name;
						cout<<"Enter no of matches\n";
						cin>>no_of_matches;
						cout<<"Enter runs scored\n";
						cin>>runs_scored;
						cout<<"Enter wickets\n";
						cin>>wickets;
						cout<<"Enter dismissal\n";
						cin>>dismissal;
						cout<<"Enter no of hundreds\n";
						cin>>no_of_hundred;
						cout<<"Enter no of fifties\n";
						cin>>no_of_fifty;
						cout<<"Enter balls faced\n";
						cin>>ball_faced;
						average= (runs_scored/((float)(dismissal)))*100;
						strike_rate= (runs_scored/((float)(ball_faced)))*100;
						player p(country,name,no_of_matches,runs_scored,wickets,dismissal,average,no_of_hundred,no_of_fifty,ball_faced,strike_rate);
						l1.insert_end(p);	
					}
					break;
					
				case 3:
					{
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
						cout<<"Enter country\n";
						cin>>country;
						cout<<"Enter name\n";
						cin>>name;
						cout<<"Enter no of matches\n";
						cin>>no_of_matches;
						cout<<"Enter runs scored\n";
						cin>>runs_scored;
						cout<<"Enter wickets\n";
						cin>>wickets;
						cout<<"Enter dismissal\n";
						cin>>dismissal;
						cout<<"Enter no of hundreds\n";
						cin>>no_of_hundred;
						cout<<"Enter no of fifties\n";
						cin>>no_of_fifty;
						cout<<"Enter balls faced\n";
						cin>>ball_faced;
						average= (runs_scored/((float)(dismissal)))*100;
						strike_rate= (runs_scored/((float)(ball_faced)))*100;
						player p(country,name,no_of_matches,runs_scored,wickets,dismissal,average,no_of_hundred,no_of_fifty,ball_faced,strike_rate);
						int position;
						cout<<"Enter position\n";
						cin>>position;
						l1.insert_at_position(p,position);
					}
					break;
					
				case 4:
					{
						int position;
						cout<<"Enter position\n";
						cin>>position;
						l1.delete_position(position);
					}
					break;
					
				case 5:
					{
						int runs;
						cout<<"Enter the runs\n";
						cin>>runs;
						l1.delete_runs(runs);
					}
					break;
				
				case 6:
					l1.display();
					break;
					
				default:
					{
						cout<<"Enter correct choice\n";
						break;	
					}
					
			}
	}
}


