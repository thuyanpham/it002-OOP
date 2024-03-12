#include "Array.h"
#include <cmath>
#define Min -100
#define Max 100

Array::Array(int n) {
	this->length = n;
	num = new int[this->length];
	for (int i = 0; i < this->length; i++) {
		num[i] = Min + rand() % (Max - Min + 1);
	}
}

Array::~Array() {
	delete[] num;
}

void Array::set() {
	cin >> this->length;
	for (int i = 0; i < this->length; i++) {
		cin >> *(num + i);
	}
}

void Array::print() {
	for (int i = 0; i < this->length; i++) {
		cout << *(num + i) << ' ';
	}
}

int Array::getVal(int pos) {
	return num[pos];
}

int Array::indexOfLargestNega() {
	int pos = -1;
	int largest = 0;
	for (int i = 0; i < this->length; i++) {
		if (num[i] < 0 && abs(num[i]) > abs(largest)) {
			pos = i;
			largest = num[i];
		}
	}
	return pos;
}

int Array::OccurencesOfanElement(const int& x) {
	int count = 0;
	for (int i = 0; i < this->length; i++) {
		if (num[i] == x)
			count++;
	}
	return count;
}

int Array::isDescendingArray() {
	for (int i = 1; i < this->length; i++) {
		if (num[i] > num[i-1])
			return 0;
	}
	return 1;
}

void Array::sortAscending() {
	for (int i = 1; i < this->length; i++) {
		int temp = num[i];
		int pos = i - 1;
		while (pos >= 0 && num[pos] > temp) {
			num[pos+1] = num[pos];
			pos--;
		}
		num[pos+1] = temp;
	}
}