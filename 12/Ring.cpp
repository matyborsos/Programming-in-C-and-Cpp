#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
	cout << "calcPerimeter of Ring...";
	return (Circle::calcPerimeter() +
		(2 * M_PI * innerradius));
}