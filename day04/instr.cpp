#include <iostream>

using namespace std;

int main(){
  const int ArSize = 15;
  char name[ArSize];
  char dessert[ArSize];  
  cout << "Enter name: " << endl;
  cin >> name;
  cout << "Enter dessert: " << endl;
  cin >> dessert;
  cout << "I have some delicious " << dessert;
  cout << " for you , " << name << endl; 
  return 0;
}