#include "Header.h"
#include "Fraction.h"
#include "Math.h"

int main() {
	Fraction* f = new Fraction[2];
	//Nhap
	for (int i = 0; i < 2; i++) {
		cout << "Nhap phan so thu " << i + 1 << ": ";
		(f + i)->input();
	}
	//Xuat
	for (int i = 0; i < 2; i++) {
		(f + i)->print(); cout << ' ';
	}
	//Tinh tong
	Fraction sum = f[0].Adding(f[1]);
	cout << "\nTong = ";
	sum.print();

	delete[] f;

	return 0;
}
