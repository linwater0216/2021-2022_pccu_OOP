#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream binaryio("city.dat", ios::out | ios::binary);
	string s = "Atlanta";
	//char s[10] = "Atlanta";
	// sizeof()�O�ŧi���j�p
	// X.size()�O��ڪ��j�p
	//binaryio.write(s, sizeof(s));
	//�ª���
	binaryio.write(s.c_str(), s.size());
	
	binaryio.close();

	cout << "Done" << endl;

	return 0;
}