#include <iostream>
#include<string>
using namespace std;
#ifndef EMP_H
#define EMP_H
class Employee
{
public:
	Employee(const string &first);
	void setName(const string &first);
	string getName() const;
	virtual void print() const;
	virtual double earnings() const = 0;
private:
	string Name;
};
#endif 