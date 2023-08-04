#include<iostream>
#include<string.h>
using namespace std;

class player {
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
	public:
		player();
		player(char*, char*, int, int, int, int, float, int, int, int, float);
		
		void setcountry(char*);
		void setname(char*);
		void setno_of_matches(int);
		void setruns_scored(int);
		void setwickets(int);
		void setdismissal(int);
		void setaverage(float);
		void setno_of_hundred(int);
		void setno_of_fifty(int);
		void setball_faced(int);
		void setstrike_rate(float);
		
		char* getcountry();
		char* getname();
		int getno_of_matches();
		int getruns_scored();
		int getwickets();
		int getdismissal();
		float getaverage();
		int getno_of_hundred();
		int getno_of_fifty();
		int getball_faced();
		float getstrike_rate();
		
		void display();
};
