#include <iostream>

using namespace std;

int main(){
  int donouts = 6;
  double cups =4.5;
  int * p_donouts;
  p_donouts = &donouts;

  cout << "donuts: " << donouts << endl;
  cout << "donuts address: " << &donouts << endl;
  cout << "cups: " << cups << endl;
  cout << "cups address: " << &cups << endl;
  cout << "p_donouts: " << p_donouts << " *p_donouts: " << *p_donouts << endl;
  *p_donouts += 1;
  cout << "*p_donouts: " << *p_donouts << " donouts: " << donouts << endl;
  p_donouts += 1;
  cout << "p_donouts: " << p_donouts << endl;
  cout << "*p_donouts: " << *p_donouts;
  return 0;
}