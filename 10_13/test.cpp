#include <algorithm>
#include<string>
#include<vector>
#include<iostream>
using std::string;
  using std::vector;
      using std::cout;
          bool compareString(const string &str)
          {
            return str.size()<5;
          }
          int main()
          {
            vector<string> v1={"a","aa","aaa","aaaa","aaaaa","aaaaaa","yangzhong"};
            vector<string>::iterator str=std::partition(v1.begin(),v1.end(),compareString);
             
              for(auto it=str;it!=v1.end();++it)
              {
                cout<<*it<<" ";
              }
          }