/*
11.2.1����ϰ�е�map�Ժ��ӵ���Ϊ�ؼ��֣��������ǵ�����vector����multimap��д�������.
*/
#include<map>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
  multimap<string,string>family;//����multimap�����ؼ����ظ������Կ��Բ���vector;
  string Surname,ChilderName;
  while(cin>>Surname>>ChilderName)
  {
    family.emplace(Surname,ChilderName);//���������ݸ�Ԫ�����͵Ĺ��캯��
  }
  for(auto f:family)
    {
      cout<<f.first<<"-"<<f.second<<endl;
    }
}