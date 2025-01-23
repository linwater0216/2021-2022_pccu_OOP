#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    // Create and initialize two rational numbers r1 and r2.
    Rational r1(4, 2);
    Rational r2(2, 3);
    cout<<"虫搭埃" << endl;
    // Test toString, add, subtract, multiply, and divide
    cout << r1.toString() << " + " << r2.toString() << " = "
        << r1.add(r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = "
        << r1.subtract(r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = "
        << r1.multiply(r2).toString() << endl;
    cout << r1.toString() << " / " << r2.toString() << " = "
        << r1.divide(r2).toString() << endl;
    cout <<"俱计场だのだ计场だだ陪ボ" << endl;//だ︽

    // Test intValue and double
    cout << "r2.intValue()" << " is " << r2.intValue() << endl;
    cout << "r2.doubleValue()" << " is " << r2.doubleValue() << endl;

    cout <<"琌单" << endl;//だ︽
    // Test compareTo and equal
    cout << "r1.compareTo(r2) is " << r1.compareTo(r2) << endl;
    cout << "r2.compareTo(r1) is " << r2.compareTo(r1) << endl;
    cout << "r1.compareTo(r1) is " << r1.compareTo(r1) << endl;

    cout <<"计肚true or false" << endl;//だ︽
    cout << "r1.equals(r1) is "
        << (r1.equals(r1) ? "true" : "false") << endl;
    cout << "r1.equals(r2) is "
        << (r1.equals(r2) ? "true" : "false") << endl;

    return 0;
}