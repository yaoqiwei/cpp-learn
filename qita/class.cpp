 #include <iostream>
using namespace std;

class Animal {
public:
    // 编译时静态绑定
    void print1() {
        printf("print1 parent class.\n");
    }
    // 虚函数，告诉编译器，运行时动态绑定。
    virtual void print2() {
        printf("print2 parent class.\n");
    }
　  virtual void print3() {
        printf("print3 parent class.\n");
    }
};
 
class Dog: public Animal {
public:
    void print1() {
        printf("print1 Dog class.\n");
    }
    void print2() {
        printf("print2 Dog class.\n");
    }
};
 
Animal *pAni;
Dog dog;
pAni = &dog;
pAni->print1();
pAni->print2();
pAni->print3();