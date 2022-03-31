#include <iostream>

using namespace std;

int main(){
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  // cout << "Enter name: \n";
  // cin.getline(name,ArSize);
  // cout << "Enter dessert : \n";
  // cin.getline(dessert,ArSize);
  // cout << "you dessert is " << dessert;
  // cout << " name is " << name;
  cout << "Enter name: \n";
  cin.get(name,ArSize).get();
  cout << "Enter dessert : \n";
  cin.get(dessert,ArSize).get();
  cout << "you dessert is " << dessert;
  cout << " name is " << name;

  return 0;
}