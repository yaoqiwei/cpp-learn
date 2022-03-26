#include <iostream>
using namespace std;

int main(void)
{
  int i;
  for ( i = 3; i < 6; i++)
  {
    if (i%3) cout<<'#'<<i%3;
    else continue;
    cout<<'$';
  }
  cout<<'#'<<endl;
}