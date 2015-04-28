#include<vector>
#include<list>
#include<iostream>
#include<algorithm>
using std::vector;
using std::list;
using std::cout;
using std::endl;
int main()
{
  list<int> inverted_lis;//逆序
  list<int>lis;//正序
  vector<int> vec={0,1,2,3,4,5,6,7,8,9};
    //第一个参数是要拷贝元素的首地址，
    //第二个参数是元素最后一个元素的下一个位置，
    //第三个参数是拷贝的目的地址，首地址。
  copy(vec.crbegin()+3,vec.crbegin()+8,std::back_inserter(inverted_lis));
  for(auto s:inverted_lis)
    {
      cout<<s<<"-";
    }
    cout<<endl;
  copy(vec.cbegin()+2,vec.cbegin()+7,std::back_inserter(lis));
   for(auto s:lis)
    {
      cout<<s<<"-";
    }
    cout<<endl;
}