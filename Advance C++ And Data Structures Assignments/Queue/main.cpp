#include"Queue.h"

int main(int argc, char** argv) {
	int size;
	cout<<"Enter size\n";
	cin>>size;
	Queue q(size);
	int choice=0;
	while (choice!=4){
		cout<<"1. Insert element\n";
		cout<<"2. Remove element\n";
		cout<<"3. Display\n";
		cout<<"4. Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch (choice){
			case 1:
				int x;
				cout<<"Enter an element\n";
				cin>>x;;
				if (q.insert(x)){
					cout<<"Element inserted successfully\n";
				}
				else {
					cout<<"Queue is full\n";
				}
				break;
				
			case 2:
				cout<<x<<"\n";
				if (q.remove(x)){
					cout<<x<<" is remove\n";
				}
				else {
					cout<<"Queue is empty\n";
				}
				break;
			case 3:
				q.display();
				break;
				
			default:
				cout<<"Invalid choice\n";
		}
	}
}
