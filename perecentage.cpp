#include <iostream> 
using namespace std; 
 
int main() { 
	float x,y,per; 
	cout<<"Enter the total marks"<<endl; 
	cin>>x; 
	cout<<"Enter how much marks you got"<<endl; 
	cin>>y; 
	per=(y/x)*100; 
	cout<<"you got"<< per<<"%"<<endl; 
	return 0; 
} 
