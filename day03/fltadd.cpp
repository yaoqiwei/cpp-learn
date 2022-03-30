#include <iostream>

using namespace std;

int main(void){
  float a = 2.34E+22f; 
  float f = 1.0f;
  float b = a + 1.0f;
  cout << "f: " << f << endl;
  cout << "a: " << a << endl;
  //float 只表示数字中前6位或者7位。所以修改第23位对这个值不会有任何影响
  cout << "b-a: " << b-a << endl;
  return 0;
}

