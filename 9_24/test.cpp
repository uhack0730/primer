#include<vector>
#include<iostream>
using std::vector;
    using std::cout;
      using std::endl;
        int main()
        {
          vector<int> v1={1,2,3,4,5,6,7,8,9,10};
          /*cout<<v1[0]<<endl;
          cout<<v1.at(0)<<endl;
          cout<<v1.front()<<endl;
          cout<<*v1.begin()<<endl;*/
            v1.pop_back();
          for(auto c:v1)
            {
              cout<<c<<endl;
            }
            cout<<v1.size();
            return 0;
        }
          