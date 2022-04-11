#include <iostream>

using namespace std;

int main(){
  double number;
  double sum = 0.0;
  for (int i = 0; i < 5; i++)
  {
    cout << "Value " << i << ": ";
    cin >> number;
    sum += number;
  }
  cout << "sum: " << sum << endl;
  cout << "and average to " << sum/5 << ".\n";
  // 去掉花括号，编译器将忽略缩进，因此只有第一条语句位于循环中。
  // for (int i = 0; i < 5; i++)
  //   cout << "Value " << i << ": ";
  //   cin >> number;
  //   sum += number;
  // cout << "sum: " << sum << endl;
  // cout << "and average to " << sum/5 << ".\n";
  return 0;
}