#include <iostream>
#include <cstring>

using namespace std;

int main(){
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy";
  cout << "Howdy I'm " << name2;
  cin >> name1;
  cout << "Well," << name1 << endl;
  cout << strlen(name1) << " strlen\n";
  cout << sizeof(name1) << " sizeof\n";
  name2[3] = '\0';
  cout << "name2: " << name2;
  return 0;
}
