#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string path="OrderDetails.txt";

void vieworder()
{
	ofstream orFile;	// output file variable declaration
	orFile.open("OrderDetails.txt",ios::app);	// open output file sourse, append outputs
	
	int oID;	int oAmount;	string operson ;  char odate;    
	cout<<"Enter order ID: ";
	cin>>oID;
	cout<<"Enter amount of books : ";
	cin>>oAmount;
	cout<<"Enter name of the person/company : ";
	cin>>operson;
	cout<<"Enter date of the order : ";
	cin>>odate;
	
	
	orFile<<oID<<" : "<<oAmount<<" : "<<operson<<" : "<<odate<<endl;	// output file writing command
	cout<<"A order added successfully..."<<endl;
	
	orFile.close();	
	
}


void prepquote()
{
	
	double price;
	int discount;
	double amountBook;
	double booksPrice;
	double netPrice;
	double answer;
	
	cout<< "Please enter book price : ";
	cin>> price;
	cout<< "Please enter no of books : ";
	cin>> amountBook;
	
	booksPrice=price*amountBook;
	
	cout<<"Price of Books: "<< booksPrice<<endl;
	cout<<"Please enter discount: "<<endl;
	cin>>discount;
	
	if(discount==0){
		
		cout<<"Quotation printed successfully"<<endl;
		
		
	}
	else{
		double dp=(booksPrice*discount)/100;
		cout<<"Discounted price : "<<dp<<endl;
	
		netPrice=booksPrice-dp;
		cout<<"Final price of books : "<<netPrice<<endl;
		cout<<"Quotation printed with discount successfully"<<endl;
	}
	
	
}







int main()
{

	do
	{
	
		system("CLS");
		int option;
	
		cout<< "Main Menu" <<endl;
		cout<<"5. View and add Order" <<endl;
		cout<<"6. Prepare quotation & add discount" <<endl;
		cout<<"7. Exit" <<endl;
		cout<<"Select your option:" ; cin>>option;
	
		switch (option)
		{
	
			case 5: vieworder(); break;
			case 6: prepquote(); break;
			case 7 : cout<<"Exit option selected.."<<endl;
			break;
			default : cout<<"Invalid choise"<<endl;	 cin.get();
		}
		cin.get();
		cin.get();
		
	}while(true);
	cout<<"Thank You.....";
	cin.get();
	cin.get();
	return 0;	
}
