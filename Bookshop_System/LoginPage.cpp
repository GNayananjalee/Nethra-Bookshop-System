#include<iostream>
#include<fstream>
#include<string>

using namespace std;

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


