#include "Header.h"
#include "Array.h"

int main() {
	int n, x;
	cout << "Nhap SL phan tu: "; cin >> n;
	Array a(n);
	cout << "Mang A: "; a.print();
	int pos = a.indexOfLargestNega();
	if (pos == -1)
		cout << "\nKhong co so am trong mang";
	else
		cout << "\nSo am lon nhat: " << a.getVal(pos);
	cout << "\nNhap so can tim x = "; cin >> x;
	cout << "So " << x << " xuat hien " << a.OccurencesOfanElement(x) << " lan";
	if (a.isDescendingArray() == 1)
		cout << "\nMang A giam dan";
	else
		cout << "\nMang A khong giam";
	a.sortAscending();
	cout << "\nSap xep tang dan: "; a.print();
	return 0;
}
