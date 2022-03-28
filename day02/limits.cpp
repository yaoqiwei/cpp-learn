#include <iostream>
#include <limits>

using namespace std;

int main(void){
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long =LONG_MAX;
  long long n_llong = LLONG_MAX;
  cout<<"int is " << sizeof(int)<<" bytes."<<endl;
  cout<<"short is " << sizeof n_short << " bytes."<<endl;
  cout<<"long is " << sizeof n_long << " bytes."<<endl;
  cout<<"llong is " << sizeof n_llong << " bytes."<<endl;
  return 0;
}