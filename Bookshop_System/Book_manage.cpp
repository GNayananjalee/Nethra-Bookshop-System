#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string path="Book Details.txt";

void addbook()
{
	ofstream bFile;	// output file variable declaration
	bFile.open("BookDetails.txt",ios::app);	// open output file sourse, append outputs
	
	int bID;	string bName;	string bAuthor ;   int ISBN;    int price; 
	cout<<"Enter book ID: ";
	cin>>bID;
	cout<<"Enter name of the book : ";
	cin>>bName;
	cout<<"Enter name of the book author : ";
	cin>>bAuthor;
	cout<<"Enter ISBN Code : ";
	cin>>ISBN;
	cout<<"Enter book price : ";
	cin>>price;
	
	bFile<<bID<<" : "<<bName<<" : "<<bAuthor<<" : "<<ISBN<<" : "<<price<<endl;	// output file writing command
	cout<<"A new book added successfully..."<<endl;
	
	bFile.close();	
	
}

void viewbook()
{
	
	
	
}
void searchbook()
{
	string bAuthor;
	cout<<"Search-->Please enter name of the book author or ISBN : ";	
	cin>>bAuthor;
}







int main()
{

	do
	{
	
		system("CLS");
		int option;
	
		cout<< "Main Menu" <<endl;
		cout<<"1. Add Book" <<endl;
		cout<<"2. View Books" <<endl;
		cout<<"3. Search Books" <<endl;
		cout<<"4. Exit" <<endl;
		cout<<"Select your option:" ; cin>>option;
	
		switch (option)
		{
	
			case 1: addbook(); break;
			case 2: viewbook(); break;
			case 3: searchbook(); break;
			case 4:  option= 4; break;
			default: cout<<"Invalid command...re-enter!"; cin.get();
		}
		cin.get();
		cin.get();
		
	}while(true);
	cout<<"Thank You.....";
	cin.get();
	cin.get();
	return 0;	
}
