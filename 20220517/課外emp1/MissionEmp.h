// Fig. 13.13: CommissionEmployee.h
// CommissionEmployee class derived from Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h" // Employee class definition

class MissionEmp : public Employee
{
public:
	MissionEmp(const string &, double = 0.0, double = 0.0);

	void setRate(double); // set commission rate
	double getRate() const; // return commission rate

	void setGross(double); // set gross sales amount
	double getGross() const; // return gross sales amount

								  // keyword virtual signals intent to override
	double earnings() const; // calculate earnings
	void print() const; // print CommissionEmployee object
private:
	double gross; // gross weekly sales
	double rate; // commission percentage
}; // end class CommissionEmployee
#endif
