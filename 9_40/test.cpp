#include<vector>
#include<string>
#include<iostream>
using std::string;
  using std::vector;
    using std::cout;
      using std::endl;
      int main()
      {
        vector<string >svec;
        svec.reserve(10);
        string word="hi";
        for(vector<string>::size_type ix=0;ix!=11;ix++)
          {
            svec.push_back(word);
          }
          svec.resize(svec.size()+svec.size()/2);
          cout<<" capacity: "<<svec.capacity()<<endl;
          
          for(auto c:svec)
            {
              cout<<c<<endl;
            }
          return 0;
        }
        