#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
	
const string make_plural(size_t  ctr, const string &word,const string & ending="s")
{
	return (ctr>1)?word+ending:word;
}
int main()
{
	cout<<make_plural(1,"success");
	cout<<endl;
	cout<<make_plural(2,"faiure");
	return 0;
}
