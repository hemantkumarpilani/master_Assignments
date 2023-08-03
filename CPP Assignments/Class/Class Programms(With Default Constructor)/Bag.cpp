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
	bag b1;
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
	return 0;
}
