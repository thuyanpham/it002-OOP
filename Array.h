#include "Header.h";
#include <vector>

class Array {
private:
	vector<int> num;
public:
	Array() {};
	Array(int n, int val) { num = vector<int>(n, val); };
	~Array() {};
	void set(int);
	void print();
	void createRandom(int);
	int countX(const int&);
	int arraySortedOrNot();
	int getMinOdd();
	void insertionSort();
};