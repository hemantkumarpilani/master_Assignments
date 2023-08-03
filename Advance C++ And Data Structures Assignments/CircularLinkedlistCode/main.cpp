#include"CircularLinkedlist.h"

int main(int argc, char** argv) {
	int choice=0;
	CircularLinkedlist l1;
	while (choice!=6){
			cout<<"1. Insert data at the begining\n";
			cout<<"2. Insert data at the end \n";
			cout<<"3. Insert data at the position\n";
			cout<<"4. Delete Node based on position\n";
			cout<<"5. Display \n";
			cout<<"6. Exit\n";
			cout<<"Enter your choice\n";
			cin>>choice;
			switch(choice){
				case 1:
					{
						int data;
						cout<<"Enter the data \n";
						cin>>data;
						l1.insert_beginning(data);	
					}
					break;
					
				case 2:
					{
						int data;
						cout<<"Enter the data\n"	;
						cin>>data;
						l1.insert_end(data);
					}
					break;
					
				case 3:
					{
						int data,position;
						cout<<"Enter the data\n";
						cin>>data;
						cout<<"Enter the position where you want to insert data\n";
						cin>>position;
						l1.insert_at_position(data,position);
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

