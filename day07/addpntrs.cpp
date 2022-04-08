#include <iostream>

using namespace std;

int main(){
  double wages [3] = {10000.0,20000.0,30000.0};
  short stacks[3] = {3,2,1};
  double * pw = wages;
  short * ps = &stacks[0];
  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  pw = pw + 1;
  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  cout << "stacks[0] " << stacks[0] << endl;
  cout << "*stacks = " << *stacks << " , " << *(stacks + 1) << endl;
  cout << sizeof(wages) << " " << sizeof(pw);
  return 0;
}