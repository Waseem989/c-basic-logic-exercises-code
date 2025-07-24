#include<iostream>
using namespace std;
class Box{
	
	double width;
	friend void printlength(Box box);
	public:
		void setwidth(double n){
			width=n;
		}
};
void printlength(Box box ){
	cout<<"length of box is "<<box.width<<endl;
}
int main(){
	Box mybox;
	mybox.setwidth(10.0);
	printlength(mybox);
	return 0;
}
