#include "Header.h"
#include "Student.h"

int main() {
	int n;
	cout << "Nhap si so: "; cin >> n;
	Student *s = new Student[n];
	for (int i = 0; i < n; i++) {
		(s + i)->input();
	}
	cout << "\nHo ten\tToan\tVan\tDiem TB\tXep loai";
	for (int i = 0; i < n; i++) {
		(s + i)->print();
	}
	
	delete[] s;
	return 0;
}
