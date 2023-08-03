#include"Stack.cpp"
#include<string.h>

int main (){
	Stack<char> st(30);
	char input_string[50];
	char reverse_string[50];
	cout<<"Enter string\n";
	gets(input_string);
	
	int len= strlen(input_string);
	
	for (int i=0; i<len; i++){
		st.push(input_string[i]);
	}
	
	for (int i=0; i<len; i++){
		st.pop(reverse_string[i]);
	}
	
	cout<<"Reversed String is " <<reverse_string;
}

