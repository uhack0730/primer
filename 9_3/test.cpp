#include<vector>
#include<iostream>
using std::vector;
using std::cout;
  using std::cin;
    using std::endl;
vector<int>::iterator s(const vector<int>::iterator first,const vector<int>::iterator last,const int number)
{
  for(auto it=first;it!=last;++it)
  {
    if(*it==number)
      return it;
  }
  return last;
}

int main()
{
  vector<int> ss={1,2,3,4,5,6,7,8,9,10};
  int c;
  cout<<"������һ������,���ǽ��ж��������Ƿ����(0��ʾ������,1��ʾ����)"<<endl;
  while(cin>>c)
  {
  s(ss.begin(),ss.end(),c);
  cout<<endl;
  }
  return 0;
}