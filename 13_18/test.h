 /*
 13——18
 定义一个  Employee 类,它包含雇员的姓名和惟一的雇员证号.
 为这个类定义默认构造函数，以及接受一个表示雇员姓名的string的构造函数。
 为每个构造函数应该通过递增一个static数据成员来生成一个唯一的证号.
 13——19
 你的Employee类需要定义它自己的拷贝控制成员吗？如果需要，为什么？如果不需要，为什么？
 实现你认为Employee需要的拷贝控制成员。
 不需要实现.没有实际意义.
 但可以定义一个赋值的拷贝控制成员
 */
 #ifndef TEST_H
 #define TEST_H
 #include<string>
 using std::string;
 class Employee{
  public:
    Employee();
    Employee(const string & name);
    const int id(){return employeeId;}
    Employee& operator=(const Employee&) = delete;//13_19
    string employeeName;
    int employeeId;
    static int i;
};
 #endif//TEST_H