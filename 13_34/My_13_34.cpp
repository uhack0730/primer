#include"My_13_34.h"
#include<iostream>
using std::cout;
  using std::endl;
void Message ::save (  Folder&f)
{
  folders.insert(&f);       //������Folder���ӵ����ǵ�Folder�б���
  
  f.addMsg(this);           //����Message���ӵ�f��Message������
}
void Message::remove (Folder  & f)
{
  folders.erase(&f) ;  //������Folder�����ǵ�Folder�б���ɾ��
  f.remMsg(this);             //����Message��f��Message������ɾ��
}

//����Message���ӵ�ָ��m��Folder��
void Message::add_to_Folders (const Message &m)
{
  for(auto  f:m.folders)        //��ÿ������m��Folder.
    {
      f->addMsg(this);            //���Folder����һ��ָ��Message��ָ��
    }
}

Message::Message(const  Message &m):
  contents(m.contents),folders(m.folders)
  {
    add_to_Folders(m);//������Ϣ���ӵ�ָ��m��Folder��
  }
  
 //�Ӷ�Ӧ��Folder��ɾ����Message
 
 void Message::remove_from_Folders ()
 {
  for(auto f  : folders)                //��folders��ÿ��ָ�룬
    {
      f->remMsg(this);                 //�Ӹ�Folder��ɾ����Message
    }
 } 
 
 Message::~Message()
  {
    remove_from_Folders();
  }
  
  Message&  Message::operator=(const Message &rhs)
    {
      //ͨ����ɾ��ָ���ٲ��������������Ը�ֵ���
      remove_from_Folders();//��������Folder
      contents  = rhs.contents;
      folders = rhs.folders;
      add_to_Folders(rhs);//����Message���ӵ���ЩFolder��
      return *this;
    }
    
    void  swap(Message  &lhs,Message  &rhs)
    {
      using std::swap;
      
      for(auto f:lhs.folders)
        {
          f->remMsg(&lhs);
        }
        for(auto f:rhs.folders)
          {
            f->remMsg(&rhs);
          }
         //����contens��Foldersָ��set
         
         swap(lhs.folders,rhs.folders);//����swap(set&,set&)
         swap(lhs.contents,rhs.contents);//����swap(string&,string&)
         //��ÿ��Message��ָ�����ӵ�������Folder��
         for(auto f :lhs.folders)
          {
            f->addMsg(&lhs);
          }
          for(auto f :rhs.folders)
          {
            f->addMsg(&rhs);
          }
    }
    void Message::print_debug()
        {
    std::cout << contents << std::endl;
          }
      void Folder::add_to_Message(const Folder&f)
        {
            for(auto m  :f.message)
              {
                m->addFldr(this);
              }       
        }
        Folder::Folder(const Folder &f):message(f.message)
          {
            add_to_Message(f);
          }
        void Folder::remove_to_Message()
          {
            for(auto m  :message)
              {
                m-> remFldr(this);
              }      
          }
          Folder::~Folder()
            {
              void remove_to_Message();
            }
           Folder&Folder::operator=(const Folder&f)
            {
              remove_to_Message();
              message = f.message;
              add_to_Message(f);
              return *this;
            }
          void  swap( Folder  &lhs, Folder  &rhs)
          {
            using std::swap;
            for(auto f:lhs.message)
              {
                f->remFldr(&lhs);
              }
              for(auto f:rhs.message)
                {
                  f-> remFldr(&rhs);
                }
             swap(lhs.message,rhs.message);//����swap(set&,set&)
             
              for(auto f:lhs.message)
                {
                  f->addFldr(&lhs);
                }
                for(auto f:rhs.message)
                {
                  f->addFldr(&rhs);
                }
          }
          void Folder::print_debug()
            {
              for (auto m : message)
                   std::cout << m->contents << " ";
                  std::cout << std::endl;
            }
          int main()
          {
            Message("yang");
            Folder f;
            return 0;
          }