#include <iostream>
using namespace std;

int main(void)
{
  char a;
  int i=32;
  cin>>a;
  // printf("Y----",a);
  if(a>='A'&&a<='Z'){
    // printf("X----",a);
    a=a+i;
  }
  cout<<a<<endl;
}