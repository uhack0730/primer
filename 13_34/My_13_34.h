#ifndef MY_13_34_H
#define MY_13_34_H
#include<string>
#include<set>
class Folder;

class Message 
{
  friend class  Folder;
  friend void  swap(Message  &,Message  &);
  friend void  swap(Folder  &,Folder  &);
  public:
    //folder被隐式初始化为空集合
    explicit Message( const std::string &str = " "):
                  contents(str){ }
   //拷贝控制成员,用来管理指向本Message的指针
   Message(const  Message&);            //拷贝构造函数
   
   Message&operator = (const  Message&);//拷贝赋值运算符
   
   ~Message();        //析构函数
   
   //从给定Folder集合中添加/删除本Message；
   void save(Folder&);
   void remove (Folder&);
   
   private:
    std::string contents;       //实际消息文本
    std::set<Folder*> folders;  //包含本Message的Folder
      
      //拷贝构造函数，拷贝运算符和析构函数所使用的工具函数
      //将本Message 添加到指向参数的Folder中
      void  add_to_Folders(const  Message&);
      //从folders中的每个Folder中删除本Message
      void  remove_from_Folders();
      
     void addFldr(Folder *f) {  folders.insert(f); }
    void  remFldr(Folder *f) {  folders.erase(f); }
       void print_debug();
   
};
void  swap(Message  &,Message  &);
class Folder
{
  friend class Message ;
  friend  void swap( Folder  &, Folder  &);
    friend void  swap(Message  &,Message  &);
  public:
   Folder()=default;
    
    Folder(const Folder&);
    
    Folder&operator=(const Folder&);
   
   ~Folder();
   
  private:
    std::set<Message*>message;      //包含的message
    void addMsg(Message *m) { message.insert(m); }
    void remMsg(Message *m) { message.erase(m); }
    void add_to_Message(const Folder&);
    void remove_to_Message();
     void print_debug();
};
void  swap( Folder  &, Folder  &);
#endif//MY_13_34_H