#include <iostream>

using namespace std;

int main(){
  // 不要使用dcletc来释放不是new分配的内存。
  // 不要使用delete释放同一个内存块两次。
  // 如果使用new[]为数组分配内存，则应使用delete[]来释放。
  // 如果使用new[ ]为一个实体分配内存，则应使用delete（没有方括号）来释放。
  // 对空指针应用delete是安全的。
  int * p = new int;
  delete p;
  delete p;
  int jusp = 5;
  int * pi = &jusp;
  delete pi;
  return 0;
}