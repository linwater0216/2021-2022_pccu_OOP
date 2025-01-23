#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "MissionEmp.h" // CommissionEmployee class definition

class BaseMissionEmp : public MissionEmp
{
public:
	BaseMissionEmp(const string &, double = 0.0, double = 0.0, double = 0.0);

	void setBase(double); // set base salary
	double getBase() const; // return base salary

								  // keyword virtual signals intent to override
	double earnings() const; // calculate earnings
	void print() const; // print BasePlusCommissionEmployee object
private:
	double base; // base salary per week
}; // end class BasePlusCommissionEmployee

#endif // BASEPLUS_H
