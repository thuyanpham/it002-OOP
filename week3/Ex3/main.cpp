#include "Header.h"
#include "Point.h"

int main() {
	Point a, b;
	cout << "Nhap toa do diem A:\n";
	a.set();
	cout << "Nhap toa do diem B:\n";
	b.set();
	cout << 'A'; a.print();
	cout << "\nB"; b.print();
	cout << "\nAB = " << a.Distance(b);

	return 0;
}
