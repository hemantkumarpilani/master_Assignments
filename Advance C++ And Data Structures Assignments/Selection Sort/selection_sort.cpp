#include<iostream>
using namespace std;

void selection_sort(int*p,int n){
	int i,j,min,index;
	for (i=0;i<n;i++){
		min=p[i];
		index=i;
		for(j=i;j<n;j++){
			if (min>p[j]){
				min=p[j];
				index=j;
			}
		}
		p[index]=p[i];
		p[i]=min;
	}
}
int main (){
	int n;
	cout<<"Enter array size\n";
	cin>>n;
	int array[n];
	cout<<"Enter "<<n<<" elements\n";
	int i;
	for (i=0;i<n;i++){
		cin>>array[i];
	}
	selection_sort(array,n);
	cout<<"Printing sorted array\n";
	for (i=0;i<n;i++){
		cout<<array[i]<<"	";
	}
}
