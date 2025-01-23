#include <iostream>

#include "Employee.h"
#include "MissionEmp.h"  
#include "BaseMissionEmp.h" 
using namespace std;

int main()
{
	MissionEmp ME("Marry", 8000, 0.06);
	BaseMissionEmp BME("John", 5000, 0.04, 300);
	ME.print();
	cout << "Total: "<<ME.earnings() << endl << endl;
	BME.print();
	cout << "Total: " << BME.earnings() << endl;
	system("pause");
} // end main
