#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream binaryio("temp.dat", ios::out | ios::binary);
  int value = 179;
  //binaryio.write(reinterpret_cast<char*>(&), sizeof());
  //�o���û����� 
  binaryio.write(reinterpret_cast<char*>(&value), sizeof(value));
  binaryio.close();

  cout << "Done" << endl;

  return 0;
}
