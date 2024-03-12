#pragma once
#include "Header.h"

class Circle {
private:
	//the coordinates of the centre, radius
	double xVal, yVal, radius;

public:
	Circle();
	~Circle();
	void set();
	void print();
	double AreaOfCircle();
	double Circumference();
};
