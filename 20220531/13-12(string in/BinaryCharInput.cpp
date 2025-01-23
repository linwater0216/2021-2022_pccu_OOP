#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream binaryio("city.dat", ios::in | ios::binary);
  char s[10];
  binaryio.read(s, 10);
  //binaryio.read(s, sizeof(s));
  cout << "Number of chars read: " << binaryio.gcount() << endl;
  s[binaryio.gcount()] = '\0'; //¦r¦êµ²§ô²Å¸¹
  cout << s << endl;
  binaryio.close();

  return 0;
}
