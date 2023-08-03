//Increment Salary of employees
#include<iostream>
using namespace std;
int main(){
	int salary;
	cout<<"Enter salary\n";
	cin>>salary;
	if (salary>10000){
		salary= salary+((salary*40)/100);
		cout<<"The new salary is "<<salary<<endl;
	}
	else if ((salary<10000)&&(salary>=8000)){
		salary= salary+((salary*50)/100);
		cout<<"The new salary is "<<salary<<endl;
	}
	else {
		salary= salary+((salary*70)/100);
		cout<<"The new salary is "<<salary<<endl;
	}
	return 0;
}
