#include"array.h"

int main (){
	int size;
	
	cout<<"Enter size of array 1\n";
	cin>>size;
	array a1(size);
	
	cout<<"Enter size of array 2\n";
	cin>>size;
	array a2(size);
	
	array a3;
	
	
	int choice=0;
	
	while (choice!=5){
		cout<<"1. Add element of array 1\n";
		cout<<"2. Add element of array 2\n";
		cout<<"3. Display\n";
		cout<<"4. Concatination\n";
		cout<<"5. Exit\n";
	
		cout<<"Enter choice\n";
		cin>>choice;
	
		switch (choice){
				
			case 1:
				int data;
				cout<<"Enter data to insert\n";
				cin>>data;
				a1.add_element(data);
				break;
				
			case 2:
				cout<<"Enter data to insert\n";
				cin>>data;
				a2.add_element(data);
				break;
				
			case 3:
				cout<<"1st array data :\n";
				a1.display();
				cout<<"2nd array data :\n";
				a2.display();
				break;
				
			case 4:
				a3= a1+a2;
				cout<<"3rd array data (Concatinate) :\n";
				a3.display();
				break;
				
			case 5:
				cout<<"********************End of program**********************\n";
				break;
				
			default:
				cout<<"Invalid choice";
		}
	}
}
