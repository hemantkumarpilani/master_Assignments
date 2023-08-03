#include<stdio.h>
#include<string.h>
typedef class bank_account {
	int account_no;
	char name[20];
	double balance;
	static double interest_rate;
	
	public:
	
	bank_account (){
		this->account_no= 0;
		strcpy(this->name,"not given");
		this->balance= 0.0;
	}
	
	bank_account(int a, char*name, double balance){
		this->account_no= a;
		strcpy(this->name, name);
		this->balance= balance;
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
	
	static void setinterest_rate(double i_rate){
		interest_rate= i_rate;
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
double bank_account :: interest_rate= 8.7;
int main (){
	ba b1,b2(1234,"Hemant",34567.5678),b3;
	int a;
	char name[20];
	double balance;
	printf("b1 account details:-\n");
	printf("Enter account no:\n");
	scanf("%d",&a);
	printf("Enter name:\n");
	scanf("%s",&name);
	printf("Enter balance:\n");
	scanf("%lf",&balance);
	b1.setaccount_no(a);
	b1.setname(name);
	b1.setbalance(balance);
	printf("b1 account details printing:-\n");
	b1.display();
	
	printf("\n\nb2 account details printing:-\n");
	b2.display();
	printf("\n\nb3 account details:-\n");
	printf("Enter account no:\n");
	scanf("%d",&a);
	printf("Enter name:\n");
	scanf("%s",&name);
	printf("Enter balance:\n");
	scanf("%lf",&balance);
	b3.setaccount_no(a);
	b3.setname(name);
	b3.setbalance(balance);
	printf("\n\nb3 account details printing:-\n");
	b3.display();
	
	bank_account ::setinterest_rate(5.8);
	printf("b1 account details printing with interest rate  5.8:-\n");
	b1.display();
	printf("\n\n");
	printf("b2 account details printing with interest rate  5.8:-\n");
	b2.display();
	printf("\n\n");
	printf("b3 account details printing with interest rate  5.8:-\n");
	b3.display();
	return 0;
}
