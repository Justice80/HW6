#ifndef HEADER_H
#define HEADER_H
#include <iostream>

using namespace std;

class Circle {
private:
	double radius;
public:
	Circle() {
		radius = 1;
	}

	Circle(double newRadius) {
		radius = newRadius;
	}

	double getArea() { return radius*radius*3.14159; }

	double getRadius() { return radius; }

	Circle subtract(Circle &secondCircle) {
		double r = radius - secondCircle.getRadius();
		return Circle(r);
	}

	int compareTo(Circle &secondCircle) {
		Circle temp = subtract(secondCircle);
		if (temp.getRadius() < 0) {
			return -1;
		}
		else if (temp.getRadius() == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}

	friend bool operator < (Circle c1, Circle c2) { return (c1.compareTo(c2) < 0); }
	friend bool operator <= (Circle c1, Circle c2) { return (c1.compareTo(c2) <= 0); }
	friend bool operator > (Circle c1, Circle c2) { return (c1.compareTo(c2) > 0); }
	friend bool operator >= (Circle c1, Circle c2) { return (c1.compareTo(c2) >= 0); }
	friend bool operator == (Circle c1, Circle c2) { return (c1.compareTo(c2) == 0); }
	friend bool operator != (Circle c1, Circle c2) { return (c1.compareTo(c2) != 0); }
};

#endif