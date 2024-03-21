#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Polynomial {
private:
	float x;
	int degree;
	vector<float> heso;
	
public:
	Polynomial(int d = 0) : degree(d), x(1), heso(vector<float>(d + 1, 1)) {};
	Polynomial(const vector<float>& a) : heso(a), degree(a.size() - 1), x(1) {};
	~Polynomial() {};

	void setCoeffs();
	int getDegree() const { return degree; };
	float solveForY(const float&) const;
	void printPoly() const;
	Polynomial adding(const Polynomial&) const;
	Polynomial subtract(const Polynomial&) const;

};
