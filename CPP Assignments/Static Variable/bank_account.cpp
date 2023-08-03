#include<stdio.h>
#include<string.h>
typedef class bank_account {
	int account_no;
	char name[20];
	double balance;
	double interest_rate;
	
	public:
	
	bank_account (){
		this->account_no= 0;
		strcpy(this->name,"not given");
		this->balance= 0.0;
		this->interest_rate= 0.0;
	}
	
	bank_account(int a, char*name, double balance, double interest_rate){
		this->account_no= a;
		strcpy(this->name, name);
		this->balance= balance;
		this->interest_rate= interest_rate;
	}
	
	void setaccount_no(int a){
		this->account_no= a;
	}
	
	void setname(char* name){
		strcpy(this->name, name);
	}
	
	void setbalance(double balance){
		this->balance= balance;
	}
	
	void setinterest_rate(double interest_rate){
		this->interest_rate= interest_rate;
	}
	
	int getaccount_no(){
		return this->account_no;
	}
	
	char* getname(){
		return this->name;
	}
	
	double getbalance(){
		return this->balance;
	}
	
	double getinterest_rate(){
		return this->interest_rate;
	}
	
	void display(){
		printf("Account no. is %d\n",this->account_no);
		printf("Name is %s \n", this->name);
		printf("Balance is %lf \n",this->balance);
		printf("Interest rate is %lf% \n",this->interest_rate);
	}
}ba;
int main (){
	ba b1,b2(1234,"Hemant",34567.5678,5.7654);
	b1.display();
	b2.display();	
	return 0;
}
