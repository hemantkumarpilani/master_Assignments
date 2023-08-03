#include <iostream>
using namespace std;

int linear_search(int* p, int s, int n){
	int i;
	for(i=0;i<n;i++){
		if(s==p[i]){
			return i;
		}
	}
	return -1;
}

int main(int argc, char** argv) {
	int n;
	cout<<"Enter array size\n";
	cin>>n;
	int array[n];
	cout<<"Enter "<<n<<" elements\n";
	int i;
	for (i=0;i<n;i++){
		cin>>array[i];
	}
	int search;
	cout<<"Enter search element \n";
	cin>>search;
	int index;
	index= linear_search(array,search,n);
	if (index==-1){
		cout<<"Element not found in array\n";
	}
	else {
		cout<<"Element found at index "<<index;
	}
	return 0;
}
