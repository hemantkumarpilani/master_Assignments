#include "linkedlist.h"

int main(int argc, char** argv) {
	int choice=0;
	Linkedlist l1;
	while (choice!=7){
			cout<<"1. Insert data at the begining\n";
			cout<<"2. Insert data at the end \n";
			cout<<"3. Insert data at the position\n";
			cout<<"4. Delete Node based on position\n";
			cout<<"5. Delete Node based on id\n";
			cout<<"6. Display \n";
			cout<<"7. Exit\n";
			cout<<"Enter your choice\n";
			cin>>choice;
			switch(choice){
				case 1:
					{
						int eid;
						char ename[20];
						double basic;
						cout<<"Enter the employee 's id, name & salary\n";
						cin>>eid>>ename>>basic;
						emp e(eid,ename,basic);
						l1.insert_beginning(e);	
					}
					break;
					
				case 2:
					{
						int eid;
						char ename[20];
						double basic;
						cout<<"Enter the employee 's id, name & salary\n";
						cin>>eid>>ename>>basic;
						emp e(eid,ename,basic);
						l1.insert_end(e);
					}
					break;
					
				case 3:
					{
						int eid;
						char ename[20];
						double basic;
						cout<<"Enter the employee 's id, name & salary\n";
						cin>>eid>>ename>>basic;
						emp e(eid,ename,basic);
						int position;
						cout<<"Enter position\n";
						cin>>position;
						l1.insert_at_position(e,position);
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
						int id;
						cout<<"Enter the id\n";
						cin>>id;
						l1.delete_id(id);
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

