#include "Header.h"
#include "Student.h"

int main() {
	Student s1, s2;
	s1.set(); cin.ignore(); s2.set();
	cout << "Ma SV\tHo ten\tGioi tinh\tNam sinh\tDiem TB";
	s1.print(); s2.print();

	int res = s1.Theyoungest(s2);
	cout << "\nSinh vien tre tuoi hon:";
	if ( res == 1)
		s1.print();
	else if (res == -1)
		s2.print();
	else cout << "Hai sinh vien bang tuoi";

	res = s1.hasHigherGPA(s2);
	cout << "\nSinh vien co GPA cao hon:";
	if (res == 1)
		s1.print();
	else if (res == -1)
		s2.print();
	else cout << "Hai sinh vien bang diem";
	return 0;
}
