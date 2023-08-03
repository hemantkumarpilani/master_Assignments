#include"test.h"

template<class T>
test<T>::test(T x){
	this->x= x;
}

template<class T>
void test<T>::display(){
	cout<<"\nValue= "<<x;
}

template<class T>
T test<T>::getX(){
	return x;
}

template<class T>
void test<T>::setX(T x){
	this->x= x;
}

