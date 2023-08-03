#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the array size \n";
	cin>>size;
	int arr[size];
	
	cout<<"Enter the elements of array\n";
	for (int i=0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"Printing array elements\n";
	for (int i=0; i<size;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	
	int no;
	cout<<"Enter the nth highest no you want to search\n";
	cin>>no;
	
	int max;
	
	for (int i=0; i<no; i++){
		int index=0;
		max= arr[0];
		for (int j=0; j<size; j++){
			if (max<arr[j]){
				max=arr[j];
				index=j;
			}
		}
		
		for (int k= index; k<size-1; k++){
			arr[k]=arr[k+1];
		}
		size= size-1;
	}
	cout<<no<<"th highest no is "<<max<<endl;
}
