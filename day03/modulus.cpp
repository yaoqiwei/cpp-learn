#include <iostream>

using namespace std;

int main(){
  const int per = 14;
  int lbs ;
  cout << "Enter your weight in pounds : ";
  cin >> lbs;
  int sone = lbs / per;
  int pound = lbs % per;
  cout << "sone: " << sone << " pound: " << pound;
  return 0;
}