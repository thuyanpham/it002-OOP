#pragma once
#include "Header.h"

class Array {
private:
	int* num;
	int length;
public:
	Array(int);
	Array(const Array&) = delete;
	~Array();
	void set();
	void print();
	int getVal(int);
	int indexOfLargestNega(); //vi tri so am lon nhat
	int OccurencesOfanElement(const int&); //so lan xuat hien cua x
	int isDescendingArray(); //kiem tra mang giam dan
	void sortAscending(); //sap xep tang dan
	
};
