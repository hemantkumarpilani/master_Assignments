#include"fan.h"

int main (){
	fan f1,f2(3,"Crompton",600,3000);
	
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	
	cout<<"Enter no of blades,company,price & rpm\n";
	cout<<"No. of blades:\n";
	cin>>no_of_blades;
	cout<<"Company:\n";
	cin>>name;
	cout<<"Price:\n";
	cin>>price;
	cout<<"RPM:\n";
	cin>>rpm;
	
	f1.setname(name);
	f1.setno_of_blades(no_of_blades);
	f1.setprice(price);
	f1.setrpm(rpm);
	
	f1.display();
	f2.display();
	
	return 0;
}
