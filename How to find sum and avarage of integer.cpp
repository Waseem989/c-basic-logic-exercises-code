#include <iostream>

#include<bits/stdc++.h>

using namespace std;

// Main function
int main() {
  // Total number of observations.
  int n; 
  // Asking for input from the user.
  cout << "Please enter total number of observations " << endl; 
  cin >> n;

  // Array to store the value of all observations.
  int * v = new int[n]; 

  cout << "Enter " << n << " numbers" << endl;

  for (int i = 0; i < n; i++)
    cin >> v[i];

  cout << endl;

  float sum = 0;
  float average = 0;

  // Calculating sum.
  for (int i = 0; i < n; i++)
    sum += v[i]; 

  cout << "sum = " << sum << endl;
  average = (float)(sum / n); 
  cout << "Average = " << average << endl;

  return 0;
}
