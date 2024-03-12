#pragma once
#include "Header.h"

class Sophuc {
private:
	float thuc, ao;
public:
	Sophuc();
	Sophuc(const float&, const float&);
	~Sophuc();

	float get_thuc();
	float get_ao();
	void input();
	void print();

	Sophuc Adding(const Sophuc&);
	Sophuc Subtracting(const Sophuc&);
	Sophuc Multiplying(const Sophuc&);
	Sophuc Dividing(const Sophuc&);
};
