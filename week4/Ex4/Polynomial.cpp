#include "Polynomial.h"

float Polynomial::solveForY(const float& x) const {
	float y = 0;
	for (int i = degree; i >= 0; i--) {
		y += heso[i] * pow(x, i);
	}
	return y;
}

void Polynomial::setCoeffs() {
	for (int i = degree; i >=0; i--) {
		cin >> heso[i];
	}
}

void Polynomial::printPoly() const {
	for (int i = degree; i >= 0; i--) {
		if (heso[i] != 0) {
			(i != degree) ? cout << " + " : cout << "";
			cout << heso[i];
			(i != 0) ? cout << "x^" << i : cout << "";
		}
	}
}

Polynomial Polynomial::adding(const Polynomial& other) const {
	int reslen = max(this->heso.size(), other.heso.size());
	vector<float> res(reslen);
	for (int i = 0; i < reslen; i++) {
		res[i] = ((i < heso.size()) ? heso[i] : 0) + ((i < other.heso.size()) ? other.heso[i] : 0);
	}
	return Polynomial(res);
}

Polynomial Polynomial::subtract(const Polynomial& other) const {
	vector<float> res(max(heso.size(), other.heso.size()));
	for (int i = 0; i < res.size(); i++) {
		res[i] = ((i < heso.size()) ? heso[i] : 0) - ((i < other.heso.size()) ? other.heso[i] : 0);
	}
	return Polynomial(res);
}
