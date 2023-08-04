#include "player.h"

player::player(){
	strcpy(this->country,"");
	strcpy(this->name,"");
	this->no_of_matches=0;
	this->runs_scored=0;
	this->wickets=0;
	this->dismissal=0;
	this->average=0.0;
	this->no_of_hundred=0;
	this->no_of_fifty=0;
	this->ball_faced=0;
	this->strike_rate=0.0;
}

player::player(char* country, char* name, int no_of_matches, int runs_scored, int wickets , int dismissal, float average, int no_of_hundred, int no_of_fifty, int ball_faced, float strike_rate){
	strcpy(this->country,country);
	strcpy(this->name,name);
	this->no_of_matches= no_of_matches;
	this->runs_scored= runs_scored;
	this->wickets= wickets;
	this->dismissal= dismissal;
	this->average= average;
	this->no_of_hundred= no_of_hundred;
	this->no_of_fifty= no_of_fifty;
	this->ball_faced= ball_faced;
	this->strike_rate= strike_rate;
}

void player::display(){
	cout<<"Country= "<<this->country;
	cout<<"\nName= "<<this->name;
	cout<<"\nNo of matches= "<<this->no_of_matches;
	cout<<"\nRuns scored= "<<this->runs_scored;
	cout<<"\nWickets= "<<this->wickets;
	cout<<"\nDismissal= "<<this->dismissal;
	cout<<"\nAverage= "<<this->average;
	cout<<"\nNo of hundreds= "<<this->no_of_hundred;
	cout<<"\nNo of fifties= "<<this->no_of_fifty;
	cout<<"\nBall faced= "<<this->ball_faced;
	cout<<"\nStrike rate= "<<this->strike_rate;
	cout<<"\n\n\n";
}

void player::setcountry(char* country){
	strcpy(this->country,country);
}

void player::setname(char* name){
	strcpy(this->name,name);
}

void player::setno_of_matches(int no_of_matches){
	this->no_of_matches= no_of_matches;
}

void player::setruns_scored(int runs_scored){
	this->runs_scored= runs_scored;
}

void player::setwickets(int wickets){
	this->wickets= wickets;
}

void player::setdismissal(int dismissal){
	this->dismissal= dismissal;
}

void player::setaverage(float average){
	this->average= average;
}

void player::setno_of_hundred(int no_of_hundred){
	this->no_of_hundred= no_of_hundred;
}

void player::setno_of_fifty(int no_of_fifty){
	this->no_of_fifty= no_of_fifty;
}

void player::setball_faced(int ball_faced){
	this->ball_faced= ball_faced;
}

void player::setstrike_rate(float strike_rate){
	this->strike_rate= strike_rate;	
}

char* player::getcountry(){
	return this->country;
}

char* player::getname(){
	return this->name;
}

int player::getno_of_matches(){
	return this->no_of_matches;
}

int player::getruns_scored(){
	return this->runs_scored;
}

int player::getwickets(){
	return this->wickets;
}

int player::getdismissal(){
	return this->dismissal;
}

float player::getaverage(){
	return this->average;
}

int player::getno_of_hundred(){
	return this->no_of_hundred;
}

int player::getno_of_fifty(){
	return this->no_of_fifty;
}

int player::getball_faced(){
	return this->ball_faced;
}

float player::getstrike_rate(){
	return this->strike_rate;
}
