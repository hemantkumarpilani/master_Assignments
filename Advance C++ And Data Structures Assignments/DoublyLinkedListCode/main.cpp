#include"DoublyLinkedlist.h"

int main(int argc, char** argv) {
	int choice=0;
	DoublyLinkedlist d;
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
						d.insert_beginning(data);	
					}
					break;
					
				case 2:
					{
						int data;
						cout<<"Enter the data\n"	;
						cin>>data;
						d.insert_end(data);
					}
					break;
					
				case 3:
					{
						int data,position;
						cout<<"Enter the data\n";
						cin>>data;
						cout<<"Enter the position where you want to insert data\n";
						cin>>position;
						d.insert_at_position(data,position);
					}
					break;
					
				case 4:
					{
						int position;
						cout<<"Enter position\n";
						cin>>position;
						d.delete_position(position);
					}
					break;
					
				case 5:
					d.display();
					break;
					
				default:
					{
						cout<<"Enter correct choice\n";
						break;	
					}
					
			}
	}
}


