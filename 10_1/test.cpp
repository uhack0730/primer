#include<algorithm>
#include<vector>
#include<iostream>
using std::vector;
  using std::cin;
  using std::cout;
    using std::endl;
      int main()
      {
        vector<int>v1;
        int val=5,number;
        while(cin>>number)
        {
          v1.push_back(number);
        }
        cin.clear();
        auto reslut = count(v1.cbegin(),v1.cend(),val);
        
        cout<<reslut<<endl;
        return 0;
      }