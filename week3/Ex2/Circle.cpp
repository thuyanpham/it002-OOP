#include "Circle.h"
#define Pi 3.1416

Circle::Circle() {
	this->xVal = this->yVal = 0;
	this->radius = 1;
}

Circle::~Circle() {

}

void Circle::set() {
	cout << "Nhap toa do tam: ";
	cin >> this->xVal >> this->yVal;
	cout << "Nhap ban kinh: ";
	cin >> this->radius;
}

void Circle::print() {
	cout << "\nToa do tam: (" << this->xVal << ',' << this->yVal << ')';
	cout << "\nBan kinh: " << this->radius;
}

double Circle::AreaOfCircle() {
	return (Pi * this->radius * this->radius);
}

double Circle::Circumference() {
	return (2 * Pi * this->radius);
}