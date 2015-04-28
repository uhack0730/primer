#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using std::vector;
  using std::string;
    using std::cin;
      using std::cout;
        using std::endl;
             bool isShorter(const string &s1,const string &s2)
            {
              return s1.size()<s2.size();
            }
             void printwords(vector<string> &cc)
            {
              for(const auto &c:cc)
                {
                  cout<<c<<" ";
                }
                cout<<endl;
            }
            void elimDups(vector<string> &words)
            {
              sort(words.begin(),words.end());
             
              //unique重排输入范围，使得每个单词只出现一次;
              //排列在范围的前部，返回指向不重复区域之后一个位置的迭代器;
              auto end_unique = unique(words.begin(),words.end());
              
              //使用向量操作erase删除重复单词
              words.erase(end_unique,words.end());

            }
            int main()
            {
              vector<string> v1 = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
              elimDups(v1);
              printwords(v1);
            }
          