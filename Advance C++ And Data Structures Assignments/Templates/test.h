#include<iostream>
using namespace std;

template<class T>
class test {
	T x;
	public:
		test(T);
		void display();
		void setX(T);
		T getX();
};
