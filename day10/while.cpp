#include <iostream>


using namespace std;

int main(){
  int x;
  cout << "Enter x:";
  cin >> x;
  int n=0;
  // do
  // {
  //   x/=10;
  //   n++;
  // }while (x > 0);
  // cout << "n: " << n;

  while (x > 0)
  {
    x/=10;
    n++;
  }
  cout << "n: " << n;

  return 0;
}