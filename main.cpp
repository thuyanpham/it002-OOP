#include "Array.h"

int main() {
	int n;
	cout << "n = "; cin >> n;
	//Nhap xuat mang
	Array int1;
	int1.set(n);
	cout << "Mang a = "; int1.print();

	//Tao mang ngau nhien
	Array int2;
	int2.createRandom(n);
	cout << endl << "Mang random b = "; int2.print();

	//Dem so lan xuat hien X
	int x;
	cout << "\nx = "; cin >> x;
	cout << x << " xuat hien " << int1.countX(x) << " lan trong mang a";

	//Kiem tra mang tang dan
	Array int3;
	cout << "\nNhap mang c: "; int3.set(n);
	if (int3.arraySortedOrNot() == 1)
		cout << "\nMang c tang dan";
	else cout << "\nMang c khong tang";

	//Tim so le nho nhat trong mang
	if (int3.getMinOdd() == 0)
		cout << "\nMang c khong co so le";
	else cout << "\nSo le nho nhat trong mang c = " << int3.getMinOdd();

	//Sap xep mang tang dan
	int3.insertionSort();
	cout << "Sap xep c tang dan: "; int3.print();
	

	return 0;
}