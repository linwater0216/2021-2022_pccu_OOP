#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream binaryio("city.dat", ios::out | ios::binary);
	string s = "Atlanta";
	//char s[10] = "Atlanta";
	// sizeof()是宣告的大小
	// X.size()是實際的大小
	//binaryio.write(s, sizeof(s));
	//舊版本
	binaryio.write(s.c_str(), s.size());
	
	binaryio.close();

	cout << "Done" << endl;

	return 0;
}