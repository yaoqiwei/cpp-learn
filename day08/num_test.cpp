#include <iostream>

using namespace std;

int main(){
  cout << "Enter the starting number :";
  int limit;
  cin >> limit;
  int i;
  for (i=limit;i;i--)
    cout << "i: " << i << endl;
  cout << "I: " << i;
  return 0;
}