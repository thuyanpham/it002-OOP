#include "Student.h"
#include <string>
#include <iomanip>

Student::Student() {
	this->name = "";
	this->math = this->liter = this->GPA = 0;
	this->classi = 0;
}

Student::~Student() {

}

void Student::input() {
	cout << "Nhap ten SV: ";
	cin.ignore(); getline(cin, this->name);
	cout << "Nhap diem Toan: "; cin >> this->math;
	cout << "Nhap diem Van: "; cin >> this->liter;
	this->GPA = (this->math + this->liter) / 2;
}

void Student::print() {
	cout << "\n" << this->name;
	cout.precision(3);
	cout << "\t" << this->math << "\t" << this->liter;
	cout << "\t" << this->GPA;
	this->classi = this->classification();
	if (this->classi == 1)
		cout << "\tXuat sac";
	else if (this->classi == 2)
		cout << "\tGioi";
	else if (this->classi == 3)
		cout << "\tKha";
	else if (this->classi == 4)
		cout << "\tTB kha";
	else if (this->classi == 5)
		cout << "\tTB";
	else cout << "\tYeu";
}

int Student::classification() {
	if (this->GPA >= 9)
		return 1;
	else if (this->GPA >= 8 && this->GPA < 9)
		return 2;
	else if (this->GPA >= 7 && this->GPA < 8)
		return 3;
	else if (this->GPA >= 6 && this->GPA < 7)
		return 4;
	else if (this->GPA >= 5 && this->GPA < 6)
		return 5;
	else return 0;
}