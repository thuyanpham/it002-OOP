#include "Monomial.h"

int main() {
	int a, b;
	cout << "Nhap don thuc P(x) = ";
	cin >> a >> b; Monomial m1(a, b);
	cout << "P(x) = "; m1.print();

	cout << "\nNhap don thuc G(x) = ";
	cin >> a >> b; Monomial m2(a, b);
	cout << "G(x) = "; m2.print();

	//Tinh tong
	cout << "\nP(x) + G(x) = ";
	(m1.adding(m2)).print();

	//Dao ham
	cout << "\nP(x)''' = ";
	(m1.nthDerivative(3)).print();

	return 0;
}