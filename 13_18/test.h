 /*
 13����18
 ����һ��  Employee ��,��������Ա��������Ωһ�Ĺ�Ա֤��.
 Ϊ����ඨ��Ĭ�Ϲ��캯�����Լ�����һ����ʾ��Ա������string�Ĺ��캯����
 Ϊÿ�����캯��Ӧ��ͨ������һ��static���ݳ�Ա������һ��Ψһ��֤��.
 13����19
 ���Employee����Ҫ�������Լ��Ŀ������Ƴ�Ա�������Ҫ��Ϊʲô���������Ҫ��Ϊʲô��
 ʵ������ΪEmployee��Ҫ�Ŀ������Ƴ�Ա��
 ����Ҫʵ��.û��ʵ������.
 �����Զ���һ����ֵ�Ŀ������Ƴ�Ա
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