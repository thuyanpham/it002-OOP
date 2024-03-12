#pragma once
#include "Header.h"

class Student {
private:
	string name;
	float math, liter, GPA;
	int classi;
public:
	Student();
	~Student();

	void input();
	void print();
	int classification();
};
