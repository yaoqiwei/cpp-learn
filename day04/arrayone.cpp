#include <iostream>

using namespace std;

int main(){
  int yams[3];
  yams[0] = 5;
  yams[1] = 10;
  yams[2] = 6;
  int yamcosts[3] = {20, 30, 5};
  cout << "Total yams = ";
  cout << yams[0] + yams[1] + yams[2] << endl; 
  cout << "yams: "<< yams[1] << " yamcosts: " << yamcosts[1] << endl;
  cout << sizeof yams << endl;
  cout << sizeof yams[1];
}