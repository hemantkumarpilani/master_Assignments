#include"myarray.h"
int main (){
	int choice=0;
	cout<<"Enter size\n";
	int size;
	cin>>size;
	myarray arr(size);
	while (choice!=10){
		cout<<"1. Add Element \n";
		cout<<"2. Display elements \n";
		cout<<"3. Search By id \n";
		cout<<"4. Search By Name \n";
		cout<<"5. Edit by id \n";
		cout<<"6. Delete by id \n";
		cout<<"10. Exit \n";
		cout<<"Enter choice :\n";
		cin>>choice;
		
		switch (choice){
			case 1:
				{
					cout<<"Enter eid,ename,basic\n";
					int id;
					char name[20];
					double basic;
					cin>>id>>name>>basic;
					emp e1(id,name,basic);
					arr.addemp(e1);
					break;
				}
				
			case 2:
				{
					arr.display();
					break;	
				}
				
			case 3:
				{	int id;
					cout<<"Enter id to search";
					cin>>id;
					arr.searchbyID(id);
					break;	
				}
				
			case 4:
				{
					char name[20];
					cout<<"Enter Name to search";
					cin>>name;
					arr.searchbyName(name);
					break;	
				}
				
			case 5:
				{
					int id;
					cout<<"Enter id to edit";
					cin>>id;
					arr.editbyid(id);
					break;
				}
				
			case 6:
				{
					int id;
					cout<<"Enter id to delete";
					cin>>id;
					arr.deletebyid(id);
					break;
				}
				
			case 10:
				{
					cout<<"************** End of Program ************ \n";
					break;
				}
				
			default:
				{
					cout<<"Invalid choice\n";
				}
		}
	}
	return 0;
}

int main1 (){
	emp e1(23,"Hemant",56456);
	cout<<e1;
}

