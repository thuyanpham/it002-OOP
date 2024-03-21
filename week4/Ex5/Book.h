#pragma once
#include <string>
#include <iostream>
using namespace std;

class Book {
private:
	string code, title;
	int year, page;
public:
	Book() : code(""), title(""), year(0), page(0) {};
	~Book() {};

	void input();
	void print();

	int getYear() { return year; };

};

class Node {
public:
	Book val;
	Node* next;
	Node(Book newbook) : val(newbook), next(NULL) {}
};

class ListBook {
private:
	Node* head;
	Node* last;
public:
	ListBook() : head(NULL), last(NULL) {};
	~ListBook() { delete head; delete last; };
	void append(Book);
	void printList();
	int latestYear();
	void latestBook();
};