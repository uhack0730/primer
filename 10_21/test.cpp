#include<iostream>
using std::cout;
  using std::endl;
    int main()
    {
      int a=8;
      auto f = [&a]()->bool {return --a?false :true ;};
        while(!f()){
      cout<<a<<" ";
    }
        cout<<a;
    }