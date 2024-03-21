#include "Monomial.h"
#include <cmath>

void Monomial::print() {
	if (this->b == 0 && this->x == 0)
		cout << "Error: invalid";
	else cout << this->a << "x^" << this->b;
}

void Monomial::solveForY(int x) {
	this->x = x;
	this->y = a * pow(x, b);
}

Monomial Monomial::adding(const Monomial& other) {
	if (this->b == other.b) {
		int suma = this->a + other.a;
		int sumb = this->b;
		return Monomial(suma, sumb);
	}
	return Monomial(0, 0, 0);
}

Monomial Monomial::nthDerivative(int n) {
	int da = this->a;
	int db = this->b;
	while (n > 0) {
		da *= db;
		db--;
		n--;
	}
	return Monomial(da, db);
}

