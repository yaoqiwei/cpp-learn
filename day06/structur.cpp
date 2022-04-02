#include <iostream>

using namespace std;

struct student
{
  char name[20];
  char telephone[12];
  int sex;
};


int main(){
  student s1={
    "yqw",
    "18857292539",
    1
  };
  student s2={
    "yyyyyy",
    "15067804137",
    1
  };
  student s3 {"警察","110",2};
  
  cout << "s1 name : " << s1.name << endl;
  cout << "s2 name : " << s2.name << endl;
  cout << "s3 name : " << s3.name << endl;
  return 0;
}