#include<stdio.h>

class printer {
	
	public:
		
	void print(int a){
		printf("%d\n",a);
	}
	
	void print(){
		printf("Hello\n");
	}
	
	void print(char a){
		printf("%c\n",a);
	}
	
	void print(int a, char b){
		printf("%d\n%c\n",a,b);
	}
	
	void print(char a, int b){
		printf("%c\n%d\n",a,b);
	}
	
};

int main (){
	printer p;
	p.print();
	p.print(10);
	p.print('A');
	p.print(20,'B');
	p.print('C',30);
	return 0;
}
