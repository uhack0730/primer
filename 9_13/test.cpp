/*
从一个list<int>初始化一个vector<double>
*/
#include<iostream>
#include<list>
#include<vector>
using std::list;
 using std::vector;
  using std::cout;
  int main(){
  list<int> v1={1,2,3,4,5,6,7,8,9,10};
  vector<double> v2(v1.begin(),v1.end());
  for(auto &c:v2)
    {
      cout<<c<<" ";
    }
    return 0;
}