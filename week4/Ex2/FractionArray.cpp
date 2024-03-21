#include "FractionArray.h"
#include <algorithm>

void FractionArray::append(const Fraction& fraction) {
	fractions.push_back(fraction);
}

void FractionArray::printArray() {
	for (Fraction& fraction : fractions) {
		fraction.print();
		cout << ' ';
	}
}

void FractionArray::randomArray(int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		int n, d;

		do {
			n = -100 + rand() % 201;
			d = -100 + rand() % 201;
		} while (d == 0);

		this->append(Fraction(n, d));
	}
}

Fraction FractionArray::maxFraction() {
	int maxidx = 0;
	for (int i = 1; i < fractions.size(); i++) {
		if (fractions[i].greater(fractions[maxidx]) > 0) {
			maxidx = i;
		}

	}
	return fractions[maxidx];
}

Fraction FractionArray::getFraction(const int& index) {
	return fractions[index];
}

void FractionArray::sortAscending() {
	for (int i = 1; i < fractions.size(); i++) {
		Fraction temp = fractions[i];
		int pos = i - 1;
		while (pos >= 0 && fractions[pos].greater(temp) > 0) {
			fractions[pos + 1] = fractions[pos];
			pos--;
		}
		fractions[pos + 1] = temp;
	}
}