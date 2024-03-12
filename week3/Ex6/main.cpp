#include "Header.h"
#include "Sophuc.h""

int main() {
	Sophuc s1, s2;
	cout << "Nhap so thuc a: "; s1.input();
	cout << "Nhap so thuc b: "; s2.input();
	cout << "So phuc a = "; s1.print();
	cout << "\nSo phuc b = "; s2.print();

	cout << "\na + b = "; (s1.Adding(s2)).print();
	cout << "\na - b = "; (s1.Subtracting(s2)).print();
	cout << "\na * b = "; (s1.Multiplying(s2)).print();
	cout << "\na / b = "; (s1.Dividing(s2)).print();
	return 0;
}
