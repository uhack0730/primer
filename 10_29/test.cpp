#include<vector>
#include<string>
#include<fstream>
#include<iterator>
#include<iostream>
#include<algorithm>
using std::string;
          int main()
          {
            std::ifstream ifs("test.txt");
            std::istream_iterator<string> in(ifs);
            std::istream_iterator<string> eof;
            std::vector<string >vec;
            
            std::copy(in,eof,back_inserter(vec));
              
            //10_30
            std::sort(vec.begin(),vec.end());

            std::cout<<"\n";
            std::ostream_iterator<string> out_iter(std::cout," ");
              //10_31
            std::unique_copy(vec.begin(),vec.end(),out_iter);
          }
