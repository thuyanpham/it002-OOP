#include "Point.h"
#include <cmath>

Point::Point() {
	this->xVal = this->yVal = 0;
}

Point::~Point() {

}

void Point::set() {
	cout << "x = ";
	cin >> this->xVal;
	cout << "y = ";
	cin >> this->yVal;
}

void Point::print() {
	cout << '(' << this->xVal << ',' << this->yVal << ')';
}

double Point::Distance(const Point& p) {
	return sqrt(pow((p.xVal - this->xVal), 2) + pow((p.yVal - this->yVal), 2));
}
