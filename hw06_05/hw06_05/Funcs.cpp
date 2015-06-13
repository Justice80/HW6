#include <iostream>
#include "Header.h"

using namespace std;

Comp::Comp() {
	real = img = 0;
}

void Comp::add(Comp num1, Comp num2) {
	real = num1.real + num2.real;
	img = num1.img + num2.img;
	cout << "The sum of two complex numbers = " << real << " + " << img << "i" << endl;
}

void Comp::subtract(Comp num1, Comp num2) {
	real = num1.real - num2.real;
	img = num1.img - num2.img;
	cout << "The difference of two complex numbers = " << real << " + " << img << "i" << endl;
}

void Comp::multiply(Comp num1, Comp num2) {
	real = num1.real*num2.real - num1.img*num2.img;
	img = num1.img*num2.real + num1.real*num2.img;
	cout << "The product of two complex numbers = " << real << " + " << img << "i" << endl;
}

void Comp::division(Comp num1, Comp num2) {
	real = (num1.real*num2.real + num1.img*num2.img) / (num2.real*num2.real + num2.img*num2.img);
	img = (num1.img*num2.real - num1.real*num2.img) / (num2.real*num2.real + num2.img*num2.img);
	cout << "The quotient of two complex numbers = " << real << " + " << img << "i" << endl;
}

void Comp::abs(Comp num1) {
	double abs = sqrt(num1.real*num1.real + num1.img*num1.img);
	cout << "The absolute value of this complex numer = " << abs << endl;
}