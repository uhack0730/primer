#include<vector>
#include<list>
#include<iostream>
#include<cstring>
using std::list;
  using std::vector;
    using std::cin;
      using std::cout;
      using std::endl;
        int main()
        {
          vector<int>v1;
          list<int>t1;
          int ia[] = {0,1,2,3,5,8,13,21,55,89};
          for(auto i=0;i!=10;i++)
          {
            v1.push_back(ia[i]);
            t1.push_back(ia[i]);
          }
          auto it = v1.begin();
          while(it!=v1.end())
          {
            if(*it%2==0)
              {
                it = v1.erase(it);
              }
              else
                ++it;
          }
          auto jj = t1.begin();
          while(jj!=t1.end())
          {
            if(*jj%2!=0)
              {
                jj = t1.erase(jj);
              }
              else
                ++jj;
          }
          for(auto c:v1)
            {
              cout<<c<<endl;
            }
            cout<<endl<<endl;
            for(auto l :t1)
              {
                cout<<l<<endl;
              }
              return 0;
        }