#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  	ifstream input("scores.txt");
	if(input.fail()){
		cout<<"File does not exist"<<endl;
		cout<<"Exit program"<<endl;
	}
	else{
		string firstName;
  		char mi;
  		string lastName;
  		int score;
  		//John T Smith 90
  		input >> firstName >> mi >> lastName >> score;
  		cout << firstName << " " << mi << " " << lastName << " " << score << endl;
  		//Eric K Jones 85
  		input >> firstName >> mi >> lastName >> score;
  		cout << firstName << " " << mi << " " << lastName << " " << score << endl;
  		input.close();

  		cout << "Done" << endl;
	}

  	return 0;
}
