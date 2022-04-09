#include <iostream>

using namespace std;

struct year_end
{
  int year;
};


int main(){
  year_end s01,s02,s03;
  s01.year =1998;
  year_end *pa = &s02;
  pa ->year = 1999;
  year_end trio[3];
  trio[0].year = 2000;
  cout << "s01:" << s01.year << ", s02: " <<
  s02.year << ", s03: " << trio->year <<endl;
  const year_end * arp[3] = {&s01, &s02, &s03};
  cout << arp;
  return 0;
}
