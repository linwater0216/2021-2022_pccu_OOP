#include <iostream>
#include "MissionEmp.h" // CommissionEmployee class definition
using namespace std;

// constructor 
MissionEmp::MissionEmp(const string &first,	 double sales, double rate)
	: Employee(first)
{
	setGross(sales);
	setRate(rate);
} // end CommissionEmployee constructor

  // set commission rate
void MissionEmp::setRate(double rate)
{
		this->rate = rate;
} // end function setCommissionRate

  // return commission rate
double MissionEmp::getRate() const
{
	return rate;
} // end function getCommissionRate

  // set gross sales amount
void MissionEmp::setGross(double sales)
{
		gross = sales;
} // end function setGrossSales

  // return gross sales amount
double MissionEmp::getGross() const
{
	return gross;
} // end function getGrossSales

  // calculate earnings; override pure virtual function earnings in Employee
double MissionEmp::earnings() const
{
	return getRate() * getGross();
} // end function earnings

  // print CommissionEmployee's information 
void MissionEmp::print() const
{
	Employee::print(); // code reuse
	cout << "Gross: " << getGross() << endl
		<< "Rate: " << getRate() << endl;
} // end function print
