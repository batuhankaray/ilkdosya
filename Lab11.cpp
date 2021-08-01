#include<iostream>
#include "Person.h"
#include "Student.h"
#include "Artist.h"
#include "ArtStudent.h"

using std::cout;

int main() {

	Person p("Zekican", 1);
	p.show();

	Student s("ABC", 2);
	s.show();

	Artist a("CDE", 2,1);
	a.show();

	ArtStudent ast("CDE", 3, 2);
	ast.show();

	return 0;
}
