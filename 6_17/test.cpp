 #include<iostream>
 #include<string>
 using std::cout;
 using std::cin;
 using std::endl;
 using std::string;
 	 void Upper(const string &s)
 	 {
 	 	  for(auto a :s)
      	{
      		if(isupper(a))
      			{
      				cout<<a<<' ';
      			}
      	}
 	 }
 	 bool Judge(const string &s)
 	 {
      for(auto a :s)
      	{
      		if(isupper(a))
      			{
      				return true;
      			}
      	}
      	return false;
 	 }
 	 void to_lower(string &s)
 	{
 		for(auto &a:s)
 			{
 				a=tolower(a);
 			}
 	}
 	int main()
 	{
 		string str, to_lowerstr;
 		cout<<"�������ַ���";
 		 getline(cin, str);
 		 to_lowerstr=str;
 		if(Judge(str))
 			{
 				cout<<"�д�д�ַ�"<<endl;
 				      Upper(str);
 				      cout<<"�Ǵ�д��ĸ"<<endl;
 				 			to_lower(str);
 			cout<<to_lowerstr<<"��Сд��ʽ"<<str<<endl;
 			}
 			else
 				cout<<"û�д�д�ַ�"<<endl;

 				
 		return 0;
 	}