#include<iostream>
#include<cmath>
using namespace std;
int main(){
/*  How to find power of and veriable 
int num1,num2;
cout<<"Enter your numbr 1: "<<endl;
cin>>num1;
cout<<"enter your 2 number: "<<endl;
cin>>num2;
double result = pow(num1, num2);
cout<<result;
*/


/*      lasted if else condition
int age;
while(true){
cout<<"enter your age: "<<endl;
cin>>age;

if(age>=1 && age<=12){
cout<<"you are child";
}
else if(age>=13 && age<=35){
cout<<"your a adult ";
}else if(age>=36){
cout<<"old ";
}else{cout<<"envaild";
}
}
*/

int day;

cout<< "enter a day from 1 to 7"<<endl;
cin>>day;

switch(day){
	case 1:
		cout<<"its monday ";
		break;
	case 2:
		cout<<" its tuesday ";
		break;
	case 3:
		cout<<" its wednesday ";
		break;
	case 4:
		cout<<" its thrusday ";
		break;
	case 5:
	    cout<<" its friday ";
		break;
	case 6:
		cout<<" its saturday ";
		break;
	case 7:
		cout<<" its sunday ";
		break;
	default:
	cout<<"invalid day";
	break;	
	 	
		
}

return 0; 
};
