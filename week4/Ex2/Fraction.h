#include "Header.h"

class Fraction {
private:
	int numer, deno;
public:
	Fraction() : numer(0), deno(1) {};
	Fraction(int, int);
	~Fraction() {}

	void shorten();
	void print();
	int greater(const Fraction&);
	int getNumer();
};
