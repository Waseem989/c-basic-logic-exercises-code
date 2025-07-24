#include<iostream>
using namespace std;
int main(){
	cout<<endl<<"************ pattern******************"<<endl;
	int n=5;
	int i,j;
	
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
		cout<<" *";
	}
		
		
	cout<<endl;
	}
	
	
/*	                                *
	                               **
	                              ***
	                             ****
	                            *****
	
	for(i=1; i<=n; i++){
		for(j=n; j>=1; j--){
			if(i>=j){
				cout<<"*"; //if we give space right side of * it would  be pyramid
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	
	*/
	
	
	
	return 0;
}
