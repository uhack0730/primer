#include<numeric>
#include<vector>
#include<list>
#include<string>
#include<iostream>
using std::vector;
  using std::list;
    using std::string;
      using std::cout;
        using std::cin;
          using std::endl;
            int main()
            {
              string a;
              cout<<"input v1"<<endl;
              vector<string>v1;
              while(cin>>a)
              {
                v1.push_back(a);
              }
             //list<string>v2{"i","love","you"};
             list<const char*>v2{"i","love","you"};
             auto result =equal(v1.cbegin(),v1.cend(),v2.cbegin());
              if(result)
                cout<<"相等";
                else
              cout<<"不想等";
              return 0;
            }