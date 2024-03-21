#include "FractionArray.h"

int isPrime(int x) {
	if (x < 2) return 0;
	if (x == 2) return 1;
	if (x % 2 == 0) return 0;
	for (int i = 3; i <= sqrt(x); i += 2) {
		if (x % i == 0) return 0;
	}
	return 1;
}

int main() {
	int size;
	cout << "Nhap kich thuoc mang: "; cin >> size;
	FractionArray arr;

	//Nhap xuat danh sach phan so
	cout << "Nhap " << size << " phan so: ";
	for (int i = 0; i < size; i++) {
		int n, d; cin >> n >> d;
		arr.append(Fraction(n, d));
	}

	arr.printArray();
	
	//Danh sach phan so ngau nhien
	FractionArray randArr;
	randArr.randomArray(size);
	cout << "\nMang ngau nhien: "; randArr.printArray();

	//Phan so lon nhat
	cout << "\nPhan so lon nhat: "; (arr.maxFraction()).print();

	//Dem phan so co tu la SNT
	int count = 0;
	for (int i = 0; i < size; i++) {
		int x = (arr.getFraction(i)).getNumer();
		if (isPrime(x) == 1)
			count++;
	}
	cout << endl << count << " phan so co tu la SNT";

	//Sap xep mang tang dan
	arr.sortAscending();
	cout << "\nSap xep mang tang dan: "; arr.printArray();

	return 0;
}