#include"My_13_27.h"

/*HasPtr::~HasPtr()
  {
    if(--*use==0)
      {
        delete ps;
        delete  use;
      }
  }*/
  HasPtr&HasPtr::operator =(const HasPtr &rps)
    {
    //  ++*rps.use;//递增右侧运算对象的引用计数
     /* if(--*use==0)
        {
          delete ps;//如果没有其它用户
          delete use;//释放本对象分配的内存
        }*/
        ps=rps.ps;
        i=rps.i;
        use=rps.use;
        return *this;
    }