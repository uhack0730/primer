#include"test.h"
#include<iostream>
using std::cout;
using std::endl;
   /*void f (numbered s)//��������Ϊʵ�δ��ݸ�һ�����������͵��β�,��ִ�п�����ʼ��
  {
    cout<<s.mysn<<endl;
  }*/

  void f(const numbered &s)//�������� const numbered&ʱ�����´��������ִ��Ĭ�ϳ�ʼ������
  {
     cout<<s.mysn<<endl;
  }
  int main()
  {
    numbered a;//Ĭ�ϳ�ʼ��
    numbered b=a;//������ʼ��(���ϵͳû�п������캯�������ʼ��һ��)
   numbered c=b;//������ʼ��(���ϵͳû�п������캯�������ʼ��һ��)
    f(a);
    f(b);
    f(c);
    return 0;
  }