
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string maxStr,Str1,Str2;
    int maxNum,Num1,Num2;
    if(cin>>Str1)
    Num1=1;
    maxNum=0;
    while(cin>>Str2)
    {
        Num2=1;
        if(Str2==Str1) //如果第二个字符串和第一个一样， 个数加一。
        	{ 
            Num2=++Num1;
          }
        if(Num1>maxNum)
        {
            maxStr=Str1;
            maxNum=Num1;
        }
        if(Str1!=Str2)
        {
            Str1=Str2;
            Num1=Num2;
        }
    }
    if(maxNum==1)
    	{
    		cout<<"没有连续重复的字符";
    	}
    	else{
    cout<<"max string:"<<maxStr<<"  number :"<<maxNum<<endl;
  }
    return 0;
}