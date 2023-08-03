#include<iostream>
using namespace std;

int binary_search(int* p, int s, int n){
	int start=n-n,end=n,mid;
	while (start<=end){
		mid=  (start+end)/2;
		if (s==p[mid]){
			return mid;
		}
		
		if (s<p[mid]){
			end= mid-1;
		}
		else {
			start= mid+1;;
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
	index= binary_search(array,search,n);
	if (index==-1){
		cout<<"Element not found in array\n";
	}
	else {
		cout<<"Element found at index "<<index;
	}
	return 0;
}
