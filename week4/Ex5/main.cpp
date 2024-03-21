#include "Book.h"

int main() {
	//Tao danh sach
	ListBook list;
	Book b1;
	b1.input();
	list.append(b1);

	Book b2;
	b2.input();
	list.append(b2);

	Book b3;
	b3.input();
	list.append(b3);
	cout << "Danh sach sach:";
	list.printList();
	
	cout << "\nSach xuat ban gan nhat:";
	list.latestBook();


	return 0;
}