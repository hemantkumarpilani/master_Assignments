#include"Stack.h"

int main (){
	int choice=0;
	int size;
	cout<<"Enter size for stack\n";
	cin>>size;
	Stack st(size);
	while (choice!=5){
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Peek\n";
		cout<<"4. Display\n";
		cout<<"5. Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice){
			case 1:
				int ele;
				cout<<"Enter an element\n";
				cin>>ele;
				if (st.push(ele)){
					cout<<"Element inserted succesfully\n";
				}
				else {
					cout<<"Stack is full\n";
				}
				break;
				
			case 2:
				int elem;
				if (st.pop(elem)){
					cout<<elem<<" element is popped\n";
				}
				else {
					cout<<"Stack is empty\n";
				}
				break;
				
			case 3:
				int element;
				if(st.peak(element)){
					cout<<element<<"is at top of the stack\n";
				}
				else {
					cout<<"No element to peak\n";
				}
				break;
				
			case 4:
				st.display();
				break;
				
			case 5:
				break;
				
			default:
				cout<<"Invalid Choice\n";
		}
	}
}
