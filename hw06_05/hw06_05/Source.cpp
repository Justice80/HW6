//14.7 The Complex Class
#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	Comp num1, num2, result;

	cout << "Enter the first comlex number" << endl;
	cin >> num1.real >> num1.img;
	cout << "Enter the second complex number" << endl;
	cin >> num2.real >> num2.img;
	
	result.add(num1, num2);
	result.subtract(num1, num2);
	result.multiply(num1, num2);
	result.division(num1, num2);
	result.abs(num1);

	return 0;
}