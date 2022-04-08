#include <iostream>

using namespace std;

union assgn_st
{
  int int_val;
  long long_val;
  double double_val;
};

int main(){
  assgn_st pall;
  pall.int_val=15;
  pall.double_val = 1.38;
  pall.long_val = 28238;
  cout << "double: " << pall.double_val;
  cout << " int: " << pall.long_val;
  return 0;
}