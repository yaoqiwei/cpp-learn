#include <iostream>
#include <cstring>

using namespace std;

int main(){
  string s1 = "My name";
  string s2 = " is yqw";
  string s3 = s1 + s2;
  cout << "s3: " << s3 << endl;
  char s5[20]="abcdefg";
  char s4[20];
  strcpy(s4,s5);
  strcat(s4,"s2");
  // strcat(s4,s5);
  cout << "s5: " << s5 << " s4: " << s4 << endl;
  int len1 = s1.size();
  int len2 = strlen(s5);
  cout << "len1: " << len1 << " len2: " << len2;
  return 0;
}