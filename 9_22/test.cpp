#include<iostream>
#include<vector>
using std::vector;
  using std::cout;
    using std::cin;
      using std::endl;
        int main()
        {
          int some_val=5;
          
          vector<int>v1={1,2,3,4,5,6,7,8,9,10};
          
          vector<int>::iterator it=v1.begin(),
                                mid=v1.begin()+v1.size()/2;
          while(it!=mid)
          {
            if(*it==some_val)
              {
                v1.insert(it,2*some_val);
              }
          }
          return 0;
        }
        /*
        �����г�����ڵĴ��������� insert ���� ��ʹβ������ʧЧ����Ҫ���»�ȡ
        */