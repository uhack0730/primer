/*
*编写程序，定义一个作者及其作品的multimap。使用 find在multimap中查找一个元素
*并使用erase删除它，确保你的程序 在元素不再map中也可以运行.
*/
#include<map>
#include<iostream>
using namespace std;
int main()
{
  multimap<string,string>authors;
  string Name,Bookname;
  while(cin>>Name>>Bookname)
  {
    authors.emplace(Name,Bookname);
  }
  string search_item("yang");
  auto iter = authors.find(search_item);
  if(iter==authors.end())
    {
      cout<<"没有这个作者";
    }
    else
      {
  auto cnt=authors.erase(iter);
  for(auto c:authors)
    {
      cout<<c.first<<" "<<c.second<<endl;//默认的排序方式就是按字典序..//11_32
    }
  }
}