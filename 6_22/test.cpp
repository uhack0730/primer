#include<iostream>
using namespace std;
void Change(int &a,int&b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
int main()
{
int q=5;
int c=6;
cout<<"交换前的Q="<<q<<" C= "<<c<<endl;
Change(q,c);
cout<<"交换后的Q="<<q<<"C= "<<c;
}