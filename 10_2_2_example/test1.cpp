#include<algorithm>
#include<vector>
#include<iostream>
using std::vector;
    using std::cout;
      using std::endl;
        int main()
        {
          vector<int> v1;
          fill_n(v1.begin(),v1.size(),0);
          
          vector<int>v2={0,1,2,3,4,5,6};
          fill_n(v2.begin(),v2.size(),0);
          for(auto c:v2)
            {
              cout<<c<<endl;
            }
            return 0;
        }