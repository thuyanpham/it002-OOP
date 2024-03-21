#include "Polynomial.h"

int main() {
	Polynomial y(5); //Khoi tao da thuc y bac 5
	//Nhap he so
	y.setCoeffs();
	//Xuat y
	cout << "y = "; y.printPoly();
	//Tinh y khi x=6
	cout << "\ny = " << y.solveForY(6) << endl;

	Polynomial g(3); //Khoi tao da thuc g bac 3
	g.setCoeffs();
	cout << "g = "; g.printPoly();

	//Cong - tru 2 da thuc
	cout << "\ny + g = ";  (y.adding(g)).printPoly();
	cout << "\ny - g = "; (y.subtract(g)).printPoly();
	return 0;
}