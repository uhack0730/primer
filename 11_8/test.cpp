#include<vector>
#include <algorithm>
#include<iostream>
using namespace std;
int main()
{
  vector<int >vec;
  for(auto i=0;i!=10;++i)
  {
    vec.push_back(i);
    vec.push_back(i);
  }
  auto end_unique=unique(vec.begin(),vec.end());
  vec.erase(end_unique,vec.end());
  cout<<vec.size();
}