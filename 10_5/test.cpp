#include<numeric>
#include<vector>
#include<iostream>
using std::vector;
      using std::cout;
        using std::cin;
          using std::endl;
            int main()
            {
             vector<const char*>v1{"i","fuck","you"};
             vector<const char*>v2{"i","love","you"};
             auto result =equal(v1.cbegin(),v1.cend(),v2.cbegin());
              if(result)
                cout<<"相等";
                else
              cout<<"不想等";
              return 0;
            }