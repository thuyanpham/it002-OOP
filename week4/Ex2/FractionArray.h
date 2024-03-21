#include "Fraction.h"
#include <vector>

class FractionArray {
private:
	vector<Fraction> fractions;
public:
	FractionArray() {};
	~FractionArray() {};
	void append(const Fraction& fraction);
	void printArray();
	void randomArray(int);
	Fraction maxFraction();
	Fraction getFraction(const int&);
	void sortAscending();
};
