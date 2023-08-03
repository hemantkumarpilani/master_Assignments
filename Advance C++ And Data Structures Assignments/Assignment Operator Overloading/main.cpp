#include"myarray.h"
int main (){
	int choice=0;
	cout<<"Enter size\n";
	int size;
	cin>>size;
	MyArray arr(size);
	while (choice!=10){
		cout<<"1. Add Element \n";
		cout<<"2. Display elements \n";
		cout<<"3. Search Element \n";
		cout<<"4. Delete Data \n";
		cout<<"10. Exit \n";
		cout<<"Enter choice :\n";
		cin>>choice;
		
		switch (choice){
			case 1:
				{
					int data;
					cout<<"Enter data to insert \n";
					cin>>data;
					arr.add_element(data);
					break;
				}
				
			case 2:
				arr.display_all();
				break;
				
			case 3:
				{
					int data;
					cout<<"Enter data to search :\n";
					cin>>data;
					arr.search_element(data);
					break;
				}
				
			case 4:
			{
				int data;
				cout<<"Enter data to delete\n";
				cin>>data;
				arr.deletedata(data);
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
	
	MyArray a2(5);
	a2.add_element(10);
	a2.add_element(15);
	arr.display_all();
	a2.display_all();
	cout<<"\n----------------------------------";
	a2= arr;  // compiler see this ->  a2.operator(arr)
	a2.display_all();
	return 0;
}
