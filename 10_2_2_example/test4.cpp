#include <algorithm>  
#include<vector>
#include<iostream>
#include<iterator>
using std::vector;
  using std::cout;
    using std::endl;
      using std::replace;
      int main()
      {
        vector<int>v1={0,1,2,3,4,5,6,7,8,9,10};
        vector<int>v2;
        /*replace(v1.begin(),v1.end(),0,1);
        for(auto c:v1)
          {
            cout<<c<<endl;
          } */ 
          replace_copy(v1.cbegin(),v1.cend(),back_inserter(v2),0,100);
          for(auto c:v1)
          {
            cout<<c<<endl;
          }
          cout<<endl<<endl;
          for(auto c1:v2)
          {
            cout<<c1<<endl;
          }
          
      return 0;
      }