#include <iostream>

using namespace std;

int main(){
  // int i = 0;
  // int sum = 0;
  // loop: if(i<=100){
  //   sum= sum+i;
  //   i++;
  //   goto loop;
  // }
  // cout<<"sum: "<< sum <<" i: "<<i;

  // int i = 0;
  // int sum = 0;
  // while (i<=100)
  // {
  //   sum += i;
  //   i++;
  // }
  // cout<<"sum: "<<sum<<" i: "<<i;


  // int i = 0;
  // int sum = 0;
  // do{
  //   sum +=i;
  //   i++;
  // }while (i<=100);
  // cout<<"sum: "<<sum<<" i: "<<i;

  int sum =0;
  for (int i = 0; i <=100; i++)
  {
    sum += i;
  }
  cout << "sum: " << sum;

  return 0;
}