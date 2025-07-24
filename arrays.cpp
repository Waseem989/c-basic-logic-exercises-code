#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int sum,avg;
	int n;
	cout<<"enter your array elements /t";
	for(int i=1; i<=5; i++){
		cin>>arr[i];
	}
	
	for(n=0; n<5; n++){
	
	sum=sum+arr[n];
	}
	
	avg=sum/n;
	
	cout<<"sum of array "<<sum<<endl<<"avg of arr "<<avg<<endl;
}
