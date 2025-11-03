#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string path="BookDetails.txt";
string path="Orderdetails.txt";

bool logIn()
{
	string username;
	string password;
	string user;
	string psw;
	
	cout<<"Enter username:";
	cin>>username;
	cout<<"Enter password:";
	cin>>password;
	
	ifstream read("Login Details.txt");
	getline(read,user);
	getline(read,psw);
	
	if (user== username && psw==password)
	{
		return true;
	}
	else
	{
			
		return false;
	}
	
}

int main()
{
	int selection;
	
	cout<<"\t\t\t_________________________________________________________________________\n\n\n";
	cout<<"\t\t\t                       Welcome to Login Page of Nethra Book Shop                         \n\n\n";
	
	
	cout<<"Selection as follws:\n 1.Sign Up\n 2.Login\n 3.Logout\n 4.Exit\nYour choice:";
	cin>>selection;
	if(selection==1)
	{
		string username;
		string password;
		
		cout<<"Enter your username:";
		cin>>username;
		cout<<"Enter your password:";
		cin>>password;
		
		ofstream lfile;
		lfile.open("Login Details.txt");
		lfile<<username<<":"<<password<<endl;
		
	
		lfile.close();
		
		

		
	}
	
	else if(selection==2)
	{
		bool status=logIn();
		if (status)
		{
			cout<<"Incorrect! Re-enter your username and password"<<endl;
			system("PAUSE");
			return 0;	
		}
		else 
		{
			cout<<"You logged in successfully...."<<endl;
			system("PAUSE");
			return 0;
		}	
	}
	
}


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
		cout<<"1. Add book" <<endl;
		cout<<"2. View book" <<endl;
		cout<<"3. Search book" <<endl;
		cout<<"4. Add & View order" <<endl;
		cout<<"5. Prepare quotation &  add discount" <<endl;
		cout<<"6. Exit " <<endl;
		cout<<"Select your option:" ; cin>>option;
	
		switch (option)
		{
	
			case 1: addbook(); break;
			case 2: viewbook(); break;
			case 3: searchbook(); break;
			case 4: vieworder(); break;
			case 5: prepquote(); break;
			case 6: cout<<"Exit option selected.."<<endl;
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


