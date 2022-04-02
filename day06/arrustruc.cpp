#include <iostream>

using namespace std;

struct student
{
  char name[20];
  char telephone[12];
  int sex;
};

union arrustruc
{
  int n;
  char ch;
  double f;
}a,b,c;


int main(){
  student st[2]={
    {"yqw","18857292539",1},
    {"qqq","15000000000",2}
  };
  cout << "st1 name: " << st[0].name << " st2 name: " << st[1].name << endl;
  a.n= 0x40;
  a.ch= '9';
  a.f=1.4;
  cout << "a n: " << a.n << "a ch: " << a.ch;
}