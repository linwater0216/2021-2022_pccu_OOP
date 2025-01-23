// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee(const string &first)
	: Name(first)
{
	// empty body 
} // end Employee constructor

  // set first name
void Employee::setName(const string &first)
{
	Name = first;
} // end function setFirstName

  // return first name
string Employee::getName() const
{
	return Name;
} // end function getFirstName

void Employee::print() const
{
	cout <<"Name:"<< getName() << endl;
} // end function print

