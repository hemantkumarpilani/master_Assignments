#include<stdio.h>
#include<string.h>
class bag {
	int price;
	char company[10];
	char colour[10];
	
	public:
		
	bag(){
		this->price=0;
		strcpy(this->company,"not given");
		strcpy(this->colour,"not given");
	}
	
	bag(int price, char* company, char* colour){
		this->price= price;
		strcpy(this->company, company);
		strcpy(this->colour, colour);
	}
	
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
	int price;
	char company[10];
	char colour[10];
	bag b1,b2(2500,"Nike","Black");
	printf("Enter bag 's company, price & colour \n");
	printf("Enter company\n");
	scanf("%s",&company);
	fflush(stdin);
	printf("Enter price\n");
	scanf("%d",&price);
	printf("Enter colour:\n");
	scanf("%s",&colour);
	b1.setcolour(colour);
	b1.setcompany(company);
	b1.setprice(price);
	b1.display_bag();
	b2.display_bag();
	return 0;
}
//	printf("1st Bag 's comapny is %s, price is %d and colour is %s \n", b1.getcompany(),b1.getprice(),b1.getcolour());
//	printf("2nd Bag 's comapny is %s, price is %d and colour is %s \n", b2.getcompany(),b2.getprice(),b2.getcolour());
