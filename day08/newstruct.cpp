#include <iostream>

using namespace std;

struct inflatable
{
  char name[20];
  float volume;
  double price;
};


int main(){
  inflatable * ps = new inflatable;
  cout << "Enter name of inflatable item: ";
  cin.get(ps ->name,20);
  cout << "Enter volume of inflatable item: ";
  cin >> (*ps).volume;
  cout << "Enter price of inflatable item: ";
  cin >> ps ->price;
  cout << "Name: " << (*ps).name << endl;
  cout << "Volune: " <<  ps->volume << endl;
  cout << "Price: " << ps->price << endl;
  delete ps;
  return 0;
}