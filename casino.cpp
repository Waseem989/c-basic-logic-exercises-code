#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;

void rules(){
   system("cls");
   cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
   cout << "\t1. Choose a number between 1 to 10\n";
   cout << "\t2. Winner gets 10 times of the money bet\n";
   cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
};
int main(){
	string name;
	int balance;
	int battnumber;
	int guss;
	cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
	cout<<"\tenter yout name : ";
	cin>>name;
	cout<<"\tenter your balance : ";
	cin>>balance; 
	
	do
	{
		rules();
		cout << "\n\nhi"<<name<<" current balance is $ " << balance << "\n";
		do{
		cout << "Hey, " <<name<<", enter amount to bet : $";
           cin >> battnumber;
           if(battnumber > balance)
               cout << "Betting balance can't be more than current balance!\n"
                      <<"\nRe-enter balance\n ";	
		}while(battnumber>balance);
	
		
	}while();
	
	return 0;
}
