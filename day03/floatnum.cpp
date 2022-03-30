#include <iostream>

using namespace std;

int main(void){
  cout.setf(ios_base::fixed,ios_base::floatfield);
  float tub = 10.0 / 3.0;
  double mint = 10.0 / 3.0;
  const float million = 1.0e6;
  cout << "tub: " << tub << " millionTub: " << million * tub <<endl ;
  cout << "mint: " << mint << " millionMint: " << million * mint <<endl;
  return 0;
}