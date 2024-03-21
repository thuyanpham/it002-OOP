#include "Fraction.h"
#include <ctime>
#include <cstdlib>

Fraction::Fraction(int n, int d) :numer(n), deno(d)
{
	while (deno == 0) {
		cout << "Error: Denominator can never be 0";
		cout << "\nPlease input a valid fraction: ";
		cin >> this->numer >> this->deno;
		
	}
}

void Fraction::shorten() {
	int x = this->numer;
	int y = this->deno;
	while (y != 0) {
		int temp = y;
		y = x % y;
		x = temp;
	}
	this->numer /= x;
	this->deno /= x;
}

void Fraction::print() {
	if (this->numer % this->deno == 0)
		cout << this->numer / this->deno;
	else {
		this->shorten();
		cout << this->numer << "/" << this->deno;
	}
}

int Fraction::greater(const Fraction& other) {
	return this->numer * other.deno - this->deno * other.numer;
}

int Fraction::getNumer() {
	return this->numer;
}