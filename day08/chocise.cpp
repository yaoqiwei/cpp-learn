#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(){
  double a1[4] = {1.2, 1.4, 1.5, 1.6};
  vector<double> a2(4);
  a2[0] = 1.0/3.0;
  a2[0] = 1.0/5.0;
  a2[0] = 1.0/7.0;
  a2[0] = 1.0/9.0;
  array<double, 4> a3 = {3.14, 4.23, 2.12, 1.34};
  array<double, 4> a4;
  a4 = a3;
  a4[0]= 1.11;
  a3[-2]=2.1;
  cout << "a1: " << a1 << endl;
  cout << "a2[0]:" << a2[0] << ", a2[1]:" << a2[1]
  << ", a2[2]:" << a2[2] << ", a2[3]:" << a2[3] << endl;
  cout << "a3[0]:" << a3[0] << ", a3[1]:" << a3[1]
  << ", a3[2]:" << a3[2] << ", a3[3]:" << a3[3] << endl;
  cout << "a4[0]:" << a4[0] << ", a4[1]:" << a4[1]
  << ", a4[2]:" << a4[2] << ", a4[3]:" << a4[3] << endl;
  return 0;
}