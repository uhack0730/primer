#include<string>
#include<map>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
  map<string,vector<int> > m={{"a",{0,1,2,3,4}},
                              {"b",{1,2,3,4,5}}};
  string man("a");
  auto iter = m.find(man);
  for(auto c:iter->second)
    {
      cout<<c<<" "<<endl; 
    } 
}