#include<forward_list>
#include<iostream>
using std::forward_list;
  using std::cin;
    using std::cout;
      using std::endl;
        int main()
        {
          forward_list<int> v1 ={0,1,2,3,4,5,6,7,8};
          auto prev = v1.before_begin();
          auto iter = v1.begin();
          while(iter!=v1.end())
          {
            if(*iter%2)
              {
                iter = v1.insert_after(iter,*iter);
                prev=iter;
                ++iter;
                
              }
              else
              {
                  iter = v1.erase_after(prev);
              }
          }
          for(auto c:v1)
            {
              cout<<c<<endl;
            }
            return 0;  
          }