#ifndef HEADER_H
#define HEADER_H
#include <iostream>

using namespace std;

class Comp {
public:
	float real, img;
	Comp();
	void add(Comp, Comp);
	void subtract(Comp, Comp);
	void multiply(Comp, Comp);
	void division(Comp, Comp);
	void abs(Comp);
};

#endif