#ifndef TEST_H
#define TEST_H
#include<iostream>
using std::cout;
using std::endl;
class X{
  public:
  X() {cout<<"X()"<<endl;}
  X(int s):data(s){cout<<"X(int s)"<<endl;};
  X(const X&){cout<<"X(const X&) "<<endl;}
  X & operator = (const X&){cout<<"operator =(const X&)"<<endl;}
  ~X(){cout<<"~X()"<<endl;}
  private:
    int data;
};

#endif //TEST_H