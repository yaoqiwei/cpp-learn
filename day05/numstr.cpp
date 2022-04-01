#include <iostream>

using namespace std;

int main(){
  cout << "What year was house built?\n";
  int year;
  (cin >> year).get();
  cout << "What is its street address?\n";
  char address[80];
  cin.getline(address,80);
  cout << "Year in " << year;
  cout << " Address in " << address;
}