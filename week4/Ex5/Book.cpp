#include "Book.h"

void Book::input() {
	cout << "Ma: "; cin >> this->code; cin.ignore();
	cout << "Ten: "; getline(cin, this->title);
	cout << "NXB: "; cin >> this->year;
	cout << "Trang: "; cin >> this->page;
}

void Book::print() {
	cout << endl << code << "\t" << title;
	cout << "\t" << year << "\t" << page;
}

void ListBook::append(Book book) {
	Node* newbook = new Node(book);
	if (head == NULL) {
		head = last = newbook;
		return;
	}
	last->next = newbook;
	last = newbook;
}

void ListBook::printList() {
	Node* temp = head;
	while (temp != NULL) {
		temp->val.print();
		temp = temp->next;
	}
}

int ListBook::latestYear() {
	Node* temp = head;
	int last = head->val.getYear();
	while (temp != NULL) {
		if (temp->val.getYear() > last)
			last = temp->val.getYear();
		temp = temp->next;
	}
	return last;
}

void ListBook::latestBook() {
	int lastY = this->latestYear();
	Node* temp = head;
	while (temp != NULL) {
		if (temp->val.getYear() == lastY)
			temp->val.print();
		temp = temp->next;
	}
}