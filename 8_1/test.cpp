#include<iostream>
#include<string>
std::istream& read(std::istream&is)
{
	auto old_state =is.rdstate();
	is.clear();
	std::string s;
	is>>s;
	is.setstate(old_state);
	return is;
}
int main()
{
	read(std::cin);
	return 0;
}
