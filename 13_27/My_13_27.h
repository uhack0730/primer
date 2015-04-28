//  Define your own reference-counted version of HasPtr. 
//���ʹ��shared_ptr;
#ifndef MY_13_27_H
#define MY_13_27_H
#include<string>
#include<memory>
using std::shared_ptr;
  using std::make_shared;
class HasPtr {
  public  :
    HasPtr(const std::string &s = std::string()):
    ps(new std::string(s)),i(0),use(make_shared<std::size_t>(1)){}
      //�������캯�����������������ݳ�Ա,������������
      
    HasPtr(const  HasPtr  &p):
      ps(p.ps),i(p.i),use(p.use){++*use;}
      
    HasPtr&operator=(const HasPtr&);
    
    //~HasPtr();
    private:
      std::string *ps;
        int i;
           shared_ptr<std::size_t>  use;
       // std::size_t *use;//������¼�кö��������*ps��Ա
};
#endif //MY_13_27����H