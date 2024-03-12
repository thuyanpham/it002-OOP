#include "Fraction.h"
#include "Math.h"

Fraction::Fraction() {
	this->numer = 1;
	this->deno = 1;
}

Fraction::Fraction(int numer, int deno) {
	this->numer = numer;
	this->deno = deno;
}

Fraction::Fraction(const Fraction& f) {
	this->numer = f.numer;
	this->deno = f.deno;
}

void Fraction::input() {
	cin >> this->numer >> this->deno;
}

void Fraction::print() {
	this->Shorten(GCDivisor(this->get_numer(), this->get_deno()));
	cout << this->numer << '/' << this->deno;
}

int Fraction::get_numer() {
	return this->numer;
}

int Fraction::get_deno() {
	return this->deno;
}

void Fraction::set(int numer, int deno) {
	this->numer = numer;
	this->deno = deno;
}

Fraction Fraction::Adding(const Fraction &addend) {
	Fraction res;
	res.numer = this->numer * addend.deno + this->deno * addend.numer;
	res.deno = this->deno * addend.deno;
	return res;
}

void Fraction::Shorten(int GCD) {
	this->numer /= GCD;
	this->deno /= GCD;
}

Fraction::~Fraction() {
}