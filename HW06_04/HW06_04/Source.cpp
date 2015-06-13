//14.3 The Circle Class
#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	Circle c1(5.0);
	Circle c2(7.0);

	cout << "The area of the circle of radius " << c1.getRadius()
		<< " is " << c1.getArea() << endl;
	cout << "The area of the circle of radius " << c2.getRadius()
		<< " is " << c2.getArea() << endl;
	cout << "c1" << " > " << "c2 is " << ((c1 > c2) ? "true" : "false") << endl;
	cout << "c1" << " >= " << "c2 is " << ((c1 >= c2) ? "true" : "false") << endl;
	cout << "c1" << " < " << "c2 is " << ((c1 < c2) ? "true" : "false") << endl;
	cout << "c1" << " <= " << "c2 is " << ((c1 <= c2) ? "true" : "false") << endl;
	cout << "c1" << " == " << "c2 is " << ((c1 == c2) ? "true" : "false") << endl;
	cout << "c1" << " != " << "c2 is " << ((c1 != c2) ? "true" : "false") << endl;

	return 0;
}