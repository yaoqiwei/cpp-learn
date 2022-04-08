#include <iostream>

using namespace std;

enum{red, orange, yellow, green, blue};
enum bits{one = 1, two = 2, four = 4, eight = 8};
enum{first, second = 100, third};
enum{zero, aaa = 0, bbb, ccc = 1};

int main(){
  cout << red << orange << yellow << endl;
  cout << one << two << four << eight << endl;
  cout << first << second << third << endl;
  cout << zero << aaa << bbb << ccc << endl;
  bits myflay;
  cout << "befor: " << myflay << endl;
  myflay = bits(10);
  cout << "myflay: " << myflay;
  return 0;
}