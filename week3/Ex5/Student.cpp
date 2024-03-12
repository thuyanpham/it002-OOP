#include "Student.h"
#include <string>

Student::Student() {
	this->code = "";
	this->name = "";
	this->gender = 'M';
	this->birth = 0;
	this->GPA = 0;
}

Student::~Student() {

}

void Student::set() {
	cout << "Nhap ma: "; getline(cin, this->code);
	cout << "Nhap ten: "; getline(cin, this->name);
	cout << "Nhap gioi tinh: "; cin >> this->gender;
	cout << "Nhap nam sinh: "; cin >> this->birth;
	cout << "Nhap diem TB: "; cin >> this->GPA;
}

void Student::print() {
	cout << "\n" << this->code << "\t" << this->name << "\t" << this->gender;
	cout << "\t" << this->birth; cout.precision(3); cout << "\t" << this->GPA;
}

int Student::Theyoungest(const Student& a) {
	int res = this->birth - a.birth;
	if (res > 0)
		return 1;
	else if (res < 0)
		return -1;
	else return 0;
}

int Student::hasHigherGPA(const Student& a) {
	float res = this->GPA - a.GPA;
	if (res > 0)
		return 1;
	else if (res < 0)
		return -1;
	else return 0;
}