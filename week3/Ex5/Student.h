#pragma once
#include "Header.h"

class Student {
private:
	string code, name;
	char gender;
	int birth;
	float GPA;
public:
	Student();
	~Student();
	void set();
	void print();
	int Theyoungest(const Student&);
	int hasHigherGPA(const Student&);
};
