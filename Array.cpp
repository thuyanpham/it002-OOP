#include "Array.h"
#include <algorithm>
#include <iterator>
void Array::set(int n) {
	this->num = vector<int>(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
}

void Array::print() {
	for (int i = 0; i < this->num.size(); i++)
		cout << this->num[i] << ' ';
}

void Array::createRandom(int n) {
	int x;
	for (int i = 0; i < n; i++) {
		x = rand();
		this->num.push_back(x);
	}
}

int Array::countX(const int& x) {
	sort(this->num.begin(), this->num.end());
	auto low = lower_bound(this->num.begin(), this->num.end(), x);

	if (low == this->num.end() || *low != x)
		return 0;

	auto high = upper_bound(this->num.begin(), this->num.end(), x);

	return high - low;

}

int Array::arraySortedOrNot() {
	int n = this->num.size();
	if (n == 1 || n == 0)
		return 1;

	for (int i = 1; i < n; i++)
		if (num[i - 1] > num[i])
			return 0;

	return 1;
}

int Array::getMinOdd() {
	int n = this->num.size();
	int idx = 0, min;
	while (idx < n && this->num[idx] % 2 == 0)
		idx++;

	if (idx < n) {
		min = this->num[idx];
		idx++;
	}
	else return 0;

	while (idx < n) {
		if (this->num[idx] % 2 && this->num[idx] < min)
			min = this->num[idx];
		idx++;
	}

	return min;
}

void Array::insertionSort() {
	int n = this->num.size();
	for (int i = 1; i < n; i++) {
		int temp = num[i];
		int pos = i - 1;
		while (pos >= 0 && num[pos] > temp) {
			num[pos + 1] = num[pos];
			pos--;
		}
		num[pos + 1] = temp;
	}
}