#include <iostream>
#include "BaseMissionEmp.h"
using namespace std;

// constructor 
BaseMissionEmp::BaseMissionEmp(
	const string &first, double sales, double rate, double salary)
	: MissionEmp(first, sales, rate)
{
	setBase(salary); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

  // set base salary
void BaseMissionEmp::setBase(double salary)
{

		base = salary;

} // end function setBaseSalary

  // return base salary
double BaseMissionEmp::getBase() const
{
	return base;
} // end function getBaseSalary

  // calculate earnings;
  // override virtual function earnings in CommissionEmployee
double BaseMissionEmp::earnings() const
{
	return getBase() + MissionEmp::earnings();
} // end function earnings

  // print BasePlusCommissionEmployee's information 
void BaseMissionEmp::print() const
{
	MissionEmp::print(); // code reuse
	cout << "Base: " << getBase() <<endl;
} // end function print
