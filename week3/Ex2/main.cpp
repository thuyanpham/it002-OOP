#include "Header.h"
#include "Circle.h"

int main() {
	Circle c;
	c.set();
	c.print();
	cout << "\nDien tich = " << c.AreaOfCircle();
	cout << "\nChu vi = " << c.Circumference();

	return 0;
}
