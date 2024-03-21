#include "Header.h"

//P(x) = ax^b
class Monomial {
private:
	int a, b, x;
public:
	Monomial(int a = 0, int b = 1) : a(a), b(b), x(0) {}
	~Monomial() {}
	
	void print();
	void solveForY(int);
	Monomial adding(const Monomial &);
	Monomial nthDerivative(int);
};