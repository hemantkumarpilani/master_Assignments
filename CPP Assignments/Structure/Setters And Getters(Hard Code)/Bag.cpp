#include<stdio.h>
#include<string.h>
struct bag {
	int price;
	char company[20];
	char colour[20];
	
	void setprice (int price){
		this->price= price;
	}
	
	void setcompany (char* company){
		strcpy(this->company,company);
	}
	
	void setcolour (char* colour){
		strcpy(this->colour,colour);
	}
	
	int getprice (){
		return this->price;
	}
	
	char* getcompany (){
		return this->company;
	}
	
	char* getcolour (){
		return this->colour;
	}
	
	void display_bag(){
	printf("Bag 's comapny is %s, price is %d and colour is %s \n", company,price,colour);
	}
};
int main (){
	bag b1;
	b1.setcolour("Black");
	b1.setcompany("Adidas");
	b1.setprice(5000);
	b1.display_bag();
	return 0;
}
