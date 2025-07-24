#include<iostream>
using namespace std;
class Demo{
	
	int num;
	friend void printlength(Demo d);
	public:
		void setwidth(int n){
			num=n;
		}
};
void printlength(Demo d ){
	cout<<"length of box is "<<d.num<<endl;
}
int main(){
	Demo mydemo;
	mydemo display(42);
	display(mydemo);
	return 0;
}
