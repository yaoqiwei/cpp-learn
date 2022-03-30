#include <iostream>

using namespace std;

int main(){
  float ax = 19.99;
  float bx = 20.99;
  
  int base = ax + bx;
  int baseInt = (int)ax + (int)bx;
  int coots = int (ax) + int (bx);

  cout << "base: " << base << endl;
  cout << "baseInt: " << baseInt << endl;
  cout << "coots: " << coots << endl;

  return 0;
}