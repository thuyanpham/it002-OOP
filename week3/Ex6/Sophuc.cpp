#include "Sophuc.h"

Sophuc::Sophuc() {
	this->thuc = 1;
	this->ao = 1;
}

Sophuc::Sophuc(const float &x, const float &y) {
	this->thuc = x;
	this->ao = y;
}

Sophuc::~Sophuc() {

}

float Sophuc::get_thuc() {
	return this->thuc;
}

float Sophuc::get_ao() {
	return this->ao;
}

void Sophuc::input() {
	cin >> this->thuc >> this->ao;
}

void Sophuc::print() {
	cout.precision(3); cout << this->thuc << " + " << this->ao << "i";
}

Sophuc Sophuc::Adding(const Sophuc& s) {
	Sophuc sum;
	sum.thuc = this->thuc + s.thuc;
	sum.ao = this->ao + s.ao;
	return sum;
}

Sophuc Sophuc::Subtracting(const Sophuc& s) {
	Sophuc diff;
	diff.thuc = this->thuc - s.thuc;
	diff.ao = this->ao - s.ao;
	return diff;
}

Sophuc Sophuc::Multiplying(const Sophuc& s) {
	Sophuc prod;
	prod.thuc = (this->thuc * s.thuc) - (this->ao * s.ao);
	prod.ao = (this->thuc * s.ao) + (s.thuc * this->ao);
	return prod;
}

Sophuc Sophuc::Dividing(const Sophuc& s) {
	Sophuc quo;
	quo.thuc = ((this->thuc * s.thuc) + (this->ao * s.ao)) / (pow(s.thuc, 2) + pow(s.ao, 2));
	quo.ao = ((s.thuc * this->ao) - (this->thuc * s.ao)) / (pow(s.thuc, 2) + pow(s.ao, 2));
	return quo;
}