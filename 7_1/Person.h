#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
class Person
{
	friend std::istream &read(std::istream &is, Person &p);
		friend std::ostream &print(std::ostream &os, const Person &p);
	public:
	  Person()=default;
	  Person(const std::string n,const std::string a):name(n),address(a){}
	
	    std::string getName(void) const {return this->name;}
    std::string getAddress(void) const {return this->address;}
    	
   private:
    std::string name;
    std::string address;
};
std::istream &read(std::istream &is, Person &p);
std::ostream &print(std::ostream &os, const Person &p);
	
#endif
