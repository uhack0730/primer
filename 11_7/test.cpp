#include<map>
#include<string>
#include<vector>
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
  map<string,vector<string> >Famliy;
  string Fname,Cname,answer;
  do
  {
     cout << "请输入姓和名，以空格或者回车格开："; 
     cin>>Fname>>Cname;
    Famliy[Fname].push_back(Cname);
   for (const auto &w : Famliy)  
        {  
            cout <<"家庭的姓为："<< w.first << " "<<"有这些孩子的名:"<<" ";  
            for (const auto &a : w.second)  
                cout << a << "、";  
            cout << endl;  
        }  
  cout<<"是否添加成员，或家庭(Y/N)"<<endl;
  cin>>answer;
  }while(answer[0]!='n');
  return 0;
}
/*#include  <iostream>
#include  <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	
	map<string,vector<string>> family;
	string fam_name;
	cout << "input familt name:" << endl;
	while (cin >> fam_name)
	{
		cout << "input children's names:"<<endl;
		string child_name;
		while (cin >> child_name)
			family[fam_name].push_back(child_name);
	}
	for (const auto &i : family)
	{
		cout <<"家庭的姓 "<< i.first <<"孩子成员";
		for (const auto &k : i.second)
			cout << k << ",";
	}
}*/