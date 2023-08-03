#include<iostream>
using namespace std;

void bubble_sort(int*p,int n){
	int i,j;
	for (i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if (p[j]>p[j+1]){
				int temp;
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;	
			}
		}
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
	bubble_sort(array,n);
	cout<<"Printing sorted array\n";
	for (i=0;i<n;i++){
		cout<<array[i]<<"	";
	}
}
