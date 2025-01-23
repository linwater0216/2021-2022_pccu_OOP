#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  fstream binaryio("city.dat", ios::in | ios::binary);
  string s;
  binaryio.read(&s[0], sizeof(s));
  //binaryio.read(s, sizeof(s));
  cout << "Number of chars read: " << binaryio.gcount() << endl;
  s[binaryio.gcount()] = '\0'; //¦r¦êµ²§ô²Å¸¹
  cout << s << endl;
  binaryio.close();

  return 0;
}
