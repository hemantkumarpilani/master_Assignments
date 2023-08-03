#include<iostream>
using namespace std;

template <class T>
T sum (T x, T y){
	return x+y;
}

template <class T1, class T2>
void asg(T1 x, T2 y){
	cout<<"\n"<<x;
	cout<<"\n"<<y;
}
