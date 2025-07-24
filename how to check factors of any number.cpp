#include <iostream>
using namespace std;

int main(){
    int number;
    int i;

    cout << "Enter a number : ";
    cin>>number;
    for(i = 1; i <= number; ++i){
        if(number % i == 0)
            cout <<i<<endl;
    }

    return 0;
}
