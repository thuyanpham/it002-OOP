#pragma once
#include "Header.h"

class Point {
private:
	double xVal, yVal;
public:
	Point();
	~Point();
	void set();
	void print();
	double Distance(const Point&);
};