#include <iostream>
#include <climits>

#define ZERO 0

using namespace std;

int main(void){
  short sam = SHRT_MAX;
  unsigned short sue = sam;
  // cout<<sam<<endl;
  // sam=sam+1;
  cout<<sam<<endl;
  sue+=1;
  cout<<"sam: "<<sam<<" sue: "<<sue<<endl;
  sam=ZERO;
  sue=ZERO;
  sam-=1;
  sue-=1;
  cout<<"sam: "<<sam<<" sue: "<<sue<<endl;
  return 0;
}