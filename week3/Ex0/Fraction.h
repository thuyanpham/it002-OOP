#pragma once
#include "Header.h"

class Fraction {
private:
	int numer, deno;
	void Shorten(int);

public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction&);
	~Fraction();

	void input();
	void print();
	int get_numer();
	int get_deno();
	void set(int, int);

	Fraction Adding(const Fraction &addend);
};
